#include <stdio.h>

int main()
{
    char c = 'c';
    int i = 123;
    long l = 123456789;
    float f = 89.1;
    double d = 6.022E23; 

    printf("char\t%lu\n", sizeof(c));
    printf("int\t%lu\n", sizeof(i));
    printf("long\t%lu\n", sizeof(l));
    printf("float\t%lu\n", sizeof(f));
    printf("double\t%lu\n", sizeof(d));

    return 0; 

}

