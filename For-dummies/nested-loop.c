// Useful in making a grid with Letter and Number pairs in increasing, repeating order. 

#include <stdio.h>

int main()
{
    int alpha,code;

    for(alpha='A';alpha<='G';alpha++)
    {
        for(code=1;code<=7;code++)
        {
            printf("%c%d\t",alpha,code);
        }
        putchar('\n');
    }
    return(0);

}
