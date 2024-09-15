#include <stdio.h>

/* 

Here there must be a change from what was originally written in the book. 
ISO C99 and later versions of C does not allow a default return of an int from functions;
return must therefore be specified. 

*/

int main()
{
    printf("hello, world!\n");
    return 0;
}


