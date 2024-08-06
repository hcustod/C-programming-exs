#include <stdio.h> 

int main()
{
    char firstname[15];
    int fav;

    printf("Type your first name: ");
    scanf("%s", firstname);
    printf("And fav number: ");
    scanf("%d", &fav);
    printf("Wassup, %s. Is your fav number %d?\n", firstname,fav);
    return(0);
}

