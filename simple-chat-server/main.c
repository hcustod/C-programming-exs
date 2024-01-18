#include <sys/socket.h>

int main() {
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);

    struct sockaddr_in address = {
        AF_INET,
        htonS(9999),
        0
    };

    bind(sockfd, &addr, sizeof(address));

    listen(sockfd, 10);

    int clientfd = accept(sockfd, 0, 0);

    struct pollfd fds[2] = {
        {
            0,
            POLLIN,
            0
        },
        {
            clientfd,
            POLLIN,
            0
        }
    };

    char buffer[256] = { 0 };
    poll(fds, 2, 50000);

    if (fds[0].revents & POLLIN) {
        read(0, buffer, 255);
        send()
    } else if () {
        
    }

}