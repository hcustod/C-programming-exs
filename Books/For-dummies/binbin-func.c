#include <stdio.h>

char *binbin(unsigned n);

int main()
{
    unsigned b,x;

    b = 21;

    for(x=0;x<8;x++)
    {
        printf("%s 0x%04X %4d\n", binbin(b),b,b);
        b<<=1;
    }
    return 0;
}

char *binbin(unsigned n)
{
    static char bin[17];
    int x;

    for(x=0;x<16;x++)
    {
        bin[x] = n & 0x8000 ? '1' : '0';
        n<<=1; 
    }
    bin[x] = '\0';
    return(bin);
}