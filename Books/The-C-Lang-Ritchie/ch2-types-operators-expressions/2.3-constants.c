// There is no limit to how long a string can be, but programs must scan a string completely to determine its length. 

#include <stdio.h>


int stringlen(char s[]) {
    
    int i = 0;

    while (s[i] != '\0') {
        ++i;
    }

    return i;

}

int main() {
    int num = stringlen("Hello this is a string");

    printf("%d", num);

    return num;
}


