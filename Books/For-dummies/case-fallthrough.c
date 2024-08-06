#include <stdio.h>
#include <ctype.h>

int main()
{
    char choice; 

    puts("meal Plans: ");
    puts("A - Breakfast, Lunch, and Dinner");
    puts("B - Lunch and Dinner only");
    puts("C - Dinner only");
    printf("Your choice: ");
    scanf("%s", &choice);

    printf("You chose ");
    switch (tolower(choice))
    {
        case 'a':
            printf("Breakfast, ");
        case 'b':
            printf("Lunch, and ");
        case 'c':
            printf("Dinner ");
            printf("as your meal plan.\n");
            break;
        default:
            printf("%c --- INVALID --- A, B, or C!", choice);

    }
    return(0);
}