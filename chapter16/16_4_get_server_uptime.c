#include "../include/apue.h"
#include <netdb.h>
#include <errno.h>
#include <sys/socket.h>

#define MAXADDRLEN 256 

#define BUFLEN 128 

extern int connect_retry(int, const struct sockaddr *, socklen_t);

void
print_uptime(int sockfd) 
{
	int n;
	char buf[BUFLEN];

	while ((n = recv(sockfd, buf, BUFLEN, 0)) > 0) {
		write(STDOUT_FILENO, buf, 0);
	}
	if (n < 0) 
		err_sys("rec ");
}