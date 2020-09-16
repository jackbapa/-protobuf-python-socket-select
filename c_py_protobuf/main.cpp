#include "protobuf/comu.h"
#include <cstring>
#ifdef _WIN64
#include <iostream>
#include <winsock2.h>
//休眠
#include <windows.h>
#pragma comment (lib, "ws2_32.lib")  //加载 ws2_32.dll

#else
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>
#endif

int main() {
    #ifdef _WIN64
    WSADATA wsaData;
    WSAStartup( MAKEWORD(2, 2), &wsaData);

    #else
    #endif
    char* demo_buf=mycomu::test();
    int len=strlen(demo_buf);
    std::cout<<std::endl;
    std::cout<<demo_buf<<std::endl<<len;



//
    //创建套接字
    SOCKET sock = socket(AF_INET, SOCK_DGRAM, 0);
    //初始化端口和地址
    sockaddr_in sockAddr;
    memset(&sockAddr, 0, sizeof(sockAddr));  //每个字节都用0填充
    sockAddr.sin_family = PF_INET;
    sockAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    sockAddr.sin_port = htons(8003);
//    连接
    connect(sock, (SOCKADDR*)&sockAddr, sizeof(SOCKADDR));
    while (TRUE){
        int bc = send(sock,demo_buf,len,0);
        std::cout<<bc;
        Sleep(1000);

    }
//
//
//
//
//
//    std::cout << "Hello, World!" << std::endl;
    return 0;
}
