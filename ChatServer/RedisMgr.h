#pragma once
#include <memory>
#include <string>
#include "Singleton.h"
#include <sw/redis++/redis++.h>

class RedisMgr : public Singleton<RedisMgr> {
    friend class Singleton<RedisMgr>;
public:
    ~RedisMgr();

    // 连接初始化（实际在构造函数中已建立，保留此接口以兼容原代码）
    bool Connect(const std::string& host, int port, const std::string& pwd = "");

    // 数据操作接口（与原接口完全一致）
    bool Get(const std::string& key, std::string& value);
    bool Set(const std::string& key, const std::string& value);
    bool ExistsKey(const std::string& key);
    bool Del(const std::string& key);
    bool LPush(const std::string& key, const std::string& value);
    bool LPop(const std::string& key, std::string& value);
    bool RPush(const std::string& key, const std::string& value);
    bool RPop(const std::string& key, std::string& value);
    bool HDel(const std::string& key, const std::string& field);
    bool HSet(const std::string& key, const std::string& hkey, const std::string& value);
    std::string HGet(const std::string& key, const std::string& hkey);
    // 其他方法可类似添加...

    void Close();

private:
    RedisMgr();   // 私有构造函数，单例使用
    std::unique_ptr<sw::redis::Redis> _redis;   // redis++ 客户端对象（自带连接池）
    bool _connected;
};
