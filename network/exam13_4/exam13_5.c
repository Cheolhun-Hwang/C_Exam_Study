#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>

void print2hex(void *p, size_t len);

int main(void){
	struct in_addr addr; 
	addr.s_addr = inet_addr("127.0.0.1");

	printf("inet_addr : %08x\n", addr.s_addr);
	print2hex(&addr.s_addr, sizeof(addr.s_addr));
	printf("inet_ntoa : %s\n", inet_ntoa(addr));



	return 0;
}

void print2hex(void *p, size_t len){

	size_t i;
	for(i = 0 ; i<len;i+=1){
	printf("[%p]%x", ((char*)p+i), *((char*)p+i));
}	
	printf("\n");

}
