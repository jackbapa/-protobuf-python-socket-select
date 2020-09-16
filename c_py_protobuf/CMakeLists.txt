cmake_minimum_required(VERSION 3.15)
project(c_py_protobuf)

set(CMAKE_CXX_STANDARD 14)
include_directories(L:/protobuf/pro/protobuf-3.12.3/mycout/include/)

link_libraries(ws2_32)

#set(PROTO "L:/protobuf/pro/protobuf-3.12.3/mycout/lib")
set(LIB libprotobuf.dll.a libprotoc.dll.a)
link_directories("L:/protobuf/pro/protobuf-3.12.3/mycout/lib")
#link方法链接的是静态库或者动态库的引入库。有时候使用link方法导入编译好的库就不行
#link_libraries(${PROTO}/${LIB})

add_executable(c_py_protobuf main.cpp protobuf/comu.cpp protobuf/comu.h protobuf/com.pb.h com.pb.cc)
target_link_libraries(${PROJECT_NAME} ${LIB})