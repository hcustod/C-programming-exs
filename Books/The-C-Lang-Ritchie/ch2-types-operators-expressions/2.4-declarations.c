// review of declaration and init of variables
#include <stdio.h>

int stringlen(const char s[]) {
    int i;

    i = 0;
    while (s[i] != '\0') {
        ++i;
    }
    return i;
};


int main() {

    const char msg[] = "A message is here!";

    int length = stringlen(msg);
    printf("Length of the message: %d\n", length);

    return 0;

}

