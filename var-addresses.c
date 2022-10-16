#include <stdio.h>

int main()
{
    char c = 'c';
    int i = 2;
    float f = 98.1;
    double d = 6.66666;

    printf("Address of c %p\n", &c);
    printf("Address of i %p\n", &i);
    printf("Address of f %p\n", &f);
    printf("Address of d %p\n", &d);
    return 0; 

}