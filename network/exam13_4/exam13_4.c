#include<stdio.h>
#include<arpa/inet.h>


void print2hex(const char *msg, void *p, size_t len);

int main(void)
{
	int a=0x12345678;
	int b = htonl(a);
	int c = htonl(b);
	
	print2hex("a", &a, sizeof(a));
	print2hex("b", &b, sizeof(b));
	print2hex("c", &c, sizeof(c));

	return 0;
}

void print2hex(const char *msg, void *p, size_t len){
size_t i;
printf("%s:\n", msg);
for(i=0; i<len;i+=1){
printf("[%p]%x", ((char*)p+i), *((char*)p+i));
}
printf("\n");

}
