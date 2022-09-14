#include <stdio.h>

int main()
{
    char a,b,c,d;

    a = 'W';
    b = a + 24;
    c = b + 8;
    d = '\n';

    printf("%c%c%c%c" ,a,b,c,d);

    char e,f,g,h;

    e = 'W';
    f = 'o';
    g = 'W';
    h = '\n';

    putchar(e);
    putchar(f);
    putchar(g);
    putchar(h);
    
    return(0);

}