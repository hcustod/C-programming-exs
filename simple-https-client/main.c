#include <sys/socket.h>
#include <netinet/in.h>

void main {
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);

    struct sockaddr_in addr = {
        AF_INET,
        hton(443),
        htonl(0x08080808)
    };

    connect(sockfd, &addr, sizeof(addr));
    


}
