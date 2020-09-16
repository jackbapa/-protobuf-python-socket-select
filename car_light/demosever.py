# 测试protobuf的接收

import socket           # 导入socket库
import time

import protobuf.com_pb2 as c

comu = c.comu()
comu.mmm = "wy"

HOST = '127.0.0.1'        # 连接本地服务器
PORT = 8003               # 设置端口号
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)       # 选择IPv4地址以及TCP协议
sock.bind((HOST, PORT))          # 绑定端口



while True:
    print('sda')
    time.sleep(1)

    data,addr=sock.recvfrom(40)
    print(addr)
    print(data)
    comu.ParseFromString(data)
    print(comu.mmm)