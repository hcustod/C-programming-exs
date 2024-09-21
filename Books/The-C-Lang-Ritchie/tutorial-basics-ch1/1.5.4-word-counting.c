#include <stdio.h>

// Program counts lines, words, and characters. Simple wc like program. 
// Change of code formating, to have braces start directly under their blocks; seems more readable. 

#define IN  1
#define OUT 0

int main()
{
    int c, nl, nw, nc, state; 

    state = OUT;
    nl = nw = nc = 0;

    while((c = getchar()) != EOF) 
    {
        ++nc;
        if (c == '\n') 
        {
            ++nl;
        }

        if (c == ' ' || c == '\n' || c == '\t') 
        {
            state = OUT;
        } else if (state == OUT) 
        {
            state = IN;
            ++nw;
        }
    } 
    printf("%d %d %d\n", nl, nw, nc);
}