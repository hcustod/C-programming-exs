#include <stdio.h>

int main()
{
    int first,second;


    printf("Input the first value: ");
    scanf("%d",&first);
    printf("Second value: ");
    scanf("%d",&second);
    
    if(first>second)
    {
        printf("first was more\n");
    }
    else if(first<second)
    {
        printf("first was less\n");
    }
    else
    {
        printf("They were equal\n");
    }

    return(0);
}