#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#define serverip "192.168.100.10"
#define serverport 1729

int main(int argc, char* argv[]) {
	int socketfd;
	struct sockaddr_in; // hold destination address
	
	socketfd = socket(AF_INET,SOCK_STREAM,0);
	printf("Socket Descriptor : %d\n",socketfd);
	
	if(socketfd<0) {
		printf("Socket Error !\n");
		return 0;
	}else {
		printf("Socket OK.\n");
	}
	
	return 1;
}


