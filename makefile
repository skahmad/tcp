appname=tcpclient

all: tcpclient.c
	gcc -c tcpclient.c -o tcpclient.o
	gcc -o tcpclient tcpclient.o
	
clear:
	rm -f tcpclient tcpclient.o