#include <stdio.h>

int main()
{
    char alpha = 'A';
    int x;
    char *pa;

    pa = &alpha;    // initialize pointer

    for (x=0;x<26;x++)
    
        putchar((*pa)++);
        putchar('\n');

    return 0;
    
}