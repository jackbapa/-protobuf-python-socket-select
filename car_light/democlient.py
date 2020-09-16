import socket
import time

HOST = 'localhost'
PORT = 8001
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
sock.connect((HOST, PORT))
time.sleep(2)
sock.send(b'1')
print(sock.recv(1024).decode())
sock.close()