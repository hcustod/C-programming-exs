#include <stdio.h>

int main()
{
    int a,b;
    float c;

    printf("Input value: ");
    scanf("%d", &a);
    printf("Input second value: ");
    scanf("%d", &b);
    c = (float)a/(float)b;
    printf("%d/%d = %.2f\n",a,b,c);
    return 0; 
}

