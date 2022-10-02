#include <stdio.h>

int main()
{
    struct player
    {
        char name[32];
        int highscore; /* data */
    };
    struct player xbox;

    printf("Enter player name: ");
    scanf("%s", xbox.name);
    printf("Enter players highschore: ");
    scanf("%d", &xbox.highscore);

    printf("Player %s has a high score of %d\n", xbox.name, xbox.highscore);
    return 0; 
    
}