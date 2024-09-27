#include <stdio.h>

// A more concise input copying program, as from 1.5.1.1

int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}