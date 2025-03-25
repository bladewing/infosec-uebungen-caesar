#include <arpa/inet.h>

#define MAXLINE 1024

void udp_receive(int sockfd, char * buffer, struct sockaddr * cliaddr);

void udp_send(int sockfd, char * message, struct sockaddr * cliaddr);