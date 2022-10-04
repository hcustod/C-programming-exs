#include <stdio.h>

void vegas(void); //Prototyping

int main()
{
    int a;

    a = 365;
    printf("In the main() function, a=%d\n", a);
    vegas();
    printf("In the main() function, a=%d\n", a);
    return 0;
}

void vegas(void)  ///Prototyping - If function is to be used before its defined.
{
    int a;    //Local variable 

    a = -10;
    printf("In the vegas() function, a=%d\n", a);
}