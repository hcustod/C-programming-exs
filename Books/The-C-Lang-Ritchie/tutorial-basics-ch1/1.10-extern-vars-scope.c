/* 
Program;
reads multiple lines of input from the user, 
keeps track of longest line entered, 
prints longest line after input is finished (EOF sent with CTRL-D on macOS)
*/

#include <stdio.h>

#define MAXLINE 1000    /* Max input line size. */

int max;                /* Max length seen so far */
char line[MAXLINE];     /* Current input line */
char longest[MAXLINE];  /* Longest line saved here */

int getli(void);
void copy(void);

int main()
{
    int len;                /* current line length */
    extern int max;
    extern char longest[];

    max = 0;
    while ((len = getli()) > 0) 
    {
        if (len > max)
        {
            max = len;
            copy();
        }
    }
    if (max > 0)   // There was a line
    {
        printf("%s", longest);
    }
}

// Originally the function here is called getline - but this conflicts with the getline in macOS's stdio.h header file. 
int getli(void)
{
    int c, i;
    extern char line[];

    for (i = 0; i < MAXLINE-1 && (c=getchar()) !=EOF && c != '\n'; ++i)
    {
        line[i] = c;
    }
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
    return i;
}

/* copy 'from' into 'to'; assume to is big enough */
void copy(void)
{
    int i; 
    extern char line[], longest[];

    i = 0;
    while ((longest[i] = line[i]) != '\0')
    {
        ++i;
    }
}