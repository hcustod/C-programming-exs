#include <stdio.h>

int main()
{
    char a,b,c;
    char *p;

    p = &a;         // initialize
    *p = 'A';       // assign 
    p = &b;
    *p = 'B';
    p = &c;
    *p = 'C';
    printf("Know your %c%c%cs\n", a,b,c);

    return 0; 

}