#include <stdio.h>

int main()
{
    const int secret = 17;
    int guess;

    printf("Can you guess the secret number? ");
    scanf("%d", &guess);
    if(guess == secret)
    {
        puts("Yes!");
        return(0);
    }
    if(guess != secret)
    {
        puts("Nope!");
        return(1);
    }

}