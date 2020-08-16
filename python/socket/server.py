import socket
import sys

# 创建 socket 对象
# AF_INET是指网络类型，文件类型是AF_UNIX
# TCP
serversocket = socket.socket(socket.AF_INET,socket.SOCK_STREAM) 
# UDP
# serversocket = socket.socket(socket_family = socket.AF_INET, socket_type =socket.SOCK_DGRAM) 
# 获取本地主机名
host = socket.gethostname()
port = 9999
# 绑定端口号
serversocket.bind((host, port))
# 设置最大连接数，超过后排队
print(host," listening")
serversocket.listen(5)
while True:
    # 建立客户端连接
    clientsocket, addr = serversocket.accept()
    print("address: %s" % str(addr))    
    msg='welcome to server！'+ "\r\n"
    clientsocket.send(msg.encode())
    clientsocket.close()
