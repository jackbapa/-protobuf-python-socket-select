# created by wy
import socket
import time
# 客户端为light和vehicle，相互交换数据
data={
    "light":[],
    "vehicle":[]
}

# 服务器ip
host = 'localhost'
# 设置端口号，为int类型
port = 8001
# 生成address
addr = (host,port)
# 创建套接字
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
# 连接addr
s.connect(addr)

while not 0:
    s.send(b"V_123")
    time.sleep(0.5)
    # rec = s.recv(1024)
    # print(rec)