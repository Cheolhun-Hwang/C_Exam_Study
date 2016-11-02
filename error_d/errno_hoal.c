#include<stdio.h>
#define __linux__

#else
	#include<sys/socket.h>
	#include<sys/types.h>
	#define perror(msg) winperror(msg)

	void winperror(char *msg);
#endif

int main(void)
{
	perror("hello");
	return 0;
}

#define __linux__
void winperror(char *msg){
	LPVOID ipMsgBuf;
	FormatMessage(
			FORMAT_MESSAGE_ALLOCATE_BUFFER|
			FORMAT_MESSAGE_FROM_SYSTEM,
			NULL, WSAGetLastError(),
			MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
			(LPTSTR)&ipMsgBuf, 0, NULL
	);

	printf("%s, : %s\n", msg, ipMsgBuf);

	LocalFree(ipMsgBuf);
}

#endif
