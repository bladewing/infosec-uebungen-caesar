#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>

#include "udp.h"

void udp_receive(int sockfd, char * buffer, struct sockaddr * cliaddr) {
	int len = sizeof(*cliaddr);
	int n = recvfrom(sockfd, buffer, MAXLINE,
				MSG_WAITALL, cliaddr,
				&len);
	buffer[n] = '\0';
}

void udp_send(int sockfd, char * message, struct sockaddr * cliaddr) {
	int len = sizeof(*cliaddr);
	sendto(sockfd, message, strlen(message),
		MSG_CONFIRM, cliaddr,
		len);
}