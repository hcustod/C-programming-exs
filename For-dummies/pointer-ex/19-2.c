#include <stdio.h>

int main()
{
    int numbers[10];
    int x;
    int *pn;

    pn = numbers;  // initialize pointer 

    // Fill array 

    for(x=0;x<10;x++)
    {
        *pn=x+1;
        pn++;
    }

    // Display array

    for(x=0;x<10;x++)
    {
        printf("numbers[%d] = %d\n",
                x,numbers[x]);
    }

    return 0; 

}