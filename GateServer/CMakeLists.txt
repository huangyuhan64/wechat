cmake_minimum_required(VERSION 3.10)
project(MyRedisProject VERSION 1.0.0 LANGUAGES CXX)

# 设置 C++ 标准（redis-plus-plus 需要 C++11 或更高）
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 查找  包
find_package(redis++ CONFIG REQUIRED)

# 添加可执行文件
add_executable(GataServer GataServer.cpp)

# 链接  库（ 会被自动链接）
target_link_libraries(GataServer PRIVATE redis++::redis++)
