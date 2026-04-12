#include "RedisMgr.h"
#include <iostream>
#include <optional>
#include"ConfigMgr.h"
RedisMgr::RedisMgr(){
auto host = ConfigMgr::Inst()["Redis"]["Host"];
auto port = ConfigMgr::Inst()["Redis"]["Port"];
auto pwd = ConfigMgr::Inst()["Redis"]["Passwd"];
Connect(host, atoi(port.c_str()), pwd);
}

RedisMgr::~RedisMgr() {
    Close();
}

bool RedisMgr::Connect(const std::string& host, int port, const std::string& pwd) {
    try {
        sw::redis::ConnectionOptions opts;
        opts.host = host;
        opts.port = port;
        if (!pwd.empty()) {
            opts.password = pwd;
        }

        // 配置连接池大小（可调整为合适值，例如 5）
        sw::redis::ConnectionPoolOptions pool_opts;
        pool_opts.size = 5;          // 连接池大小，可根据并发需求调整
        // pool_opts.wait_timeout = std::chrono::milliseconds(100); // 可选：获取连接超时时间

        // 创建 Redis 对象，内部自动建立连接池
        _redis = std::make_unique<sw::redis::Redis>(opts, pool_opts);
        _connected = true;

        // 可选：测试连接是否正常（执行一个简单命令）
        _redis->ping();
        return true;
    }
    catch (const sw::redis::Error& e) {
        std::cerr << "Redis connection failed: " << e.what() << std::endl;
        _connected = false;
        return false;
    }
}

bool RedisMgr::Get(const std::string& key, std::string& value) {
    if (!_connected) return false;
    try {
        // redis++ 内部自动从连接池获取连接，执行命令后自动归还
        auto result = _redis->get(key);
        if (!result) {
            return false;   // 键不存在
        }
        value = *result;
        return true;
    }
    catch (const sw::redis::Error& e) {
        std::cerr << "GET error: " << e.what() << std::endl;
        return false;
    }
}

bool RedisMgr::Set(const std::string& key, const std::string& value) {
    if (!_connected) return false;
    try {
        bool ok = _redis->set(key, value);
        return ok;
    }
    catch (const sw::redis::Error& e) {
        std::cerr << "SET error: " << e.what() << std::endl;
        return false;
    }
}

bool RedisMgr::ExistsKey(const std::string& key) {
    if (!_connected) return false;
    try {
        long long count = _redis->exists(key);
        return count > 0;
    }
    catch (const sw::redis::Error& e) {
        std::cerr << "EXISTS error: " << e.what() << std::endl;
        return false;
    }
}

bool RedisMgr::Del(const std::string& key) {
    if (!_connected) return false;
    try {
        long long deleted = _redis->del(key);
        return deleted > 0;
    }
    catch (const sw::redis::Error& e) {
        std::cerr << "DEL error: " << e.what() << std::endl;
        return false;
    }
}

bool RedisMgr::LPush(const std::string& key, const std::string& value) {
    if (!_connected) return false;
    try {
        long long len = _redis->lpush(key, value);
        return len > 0;
    }
    catch (const sw::redis::Error& e) {
        std::cerr << "LPUSH error: " << e.what() << std::endl;
        return false;
    }
}

bool RedisMgr::LPop(const std::string& key, std::string& value) {
    if (!_connected) return false;
    try {
        auto result = _redis->lpop(key);
        if (!result) return false;
        value = *result;
        return true;
    }
    catch (const sw::redis::Error& e) {
        std::cerr << "LPOP error: " << e.what() << std::endl;
        return false;
    }
}

bool RedisMgr::RPush(const std::string& key, const std::string& value) {
    if (!_connected) return false;
    try {
        long long len = _redis->rpush(key, value);
        return len > 0;
    }
    catch (const sw::redis::Error& e) {
        std::cerr << "RPUSH error: " << e.what() << std::endl;
        return false;
    }
}

bool RedisMgr::RPop(const std::string& key, std::string& value) {
    if (!_connected) return false;
    try {
        auto result = _redis->rpop(key);
        if (!result) return false;
        value = *result;
        return true;
    }
    catch (const sw::redis::Error& e) {
        std::cerr << "RPOP error: " << e.what() << std::endl;
        return false;
    }
}

bool RedisMgr::HDel(const std::string& key, const std::string& field)
{
    if (!_connected) return false;
    try {
        long long deleted = _redis->hdel(key, field);
        return deleted > 0;
    }
    catch (const sw::redis::Error& e) {
        std::cerr << "HDEL error: " << e.what() << std::endl;
        return false;
    }
}

bool RedisMgr::HSet(const std::string& key, const std::string& hkey, const std::string& value) {
    if (!_connected) return false;
    try {
        bool ok = _redis->hset(key, hkey, value);
        return ok;   // 即使字段已存在，也视为成功
    }
    catch (const sw::redis::Error& e) {
        std::cerr << "HSET error: " << e.what() << std::endl;
        return false;
    }
}

std::string RedisMgr::HGet(const std::string& key, const std::string& hkey) {
    if (!_connected) return "";
    try {
        auto result = _redis->hget(key, hkey);
        if (!result) return "";
        return *result;
    }
    catch (const sw::redis::Error& e) {
        std::cerr << "HGET error: " << e.what() << std::endl;
        return "";
    }
}

void RedisMgr::Close() {
    if (_redis) {
        _redis.reset();   // 释放 redis++ 对象，连接池自动关闭
    }
    _connected = false;
}