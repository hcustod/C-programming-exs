/* 
Program;
reads multiple lines of input from the user, 
keeps track of longest line entered, 
prints longest line after input is finished (EOF sent with CTRL-D on macOS)
*/

#include <stdio.h>

#define MAXLINE 1000    /* Max input line size. */

int getli(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;                /* current line length */
    int max;                /* maximum length seen so far */
    char line[MAXLINE];     /* current input line */
    char longest[MAXLINE];  /* longest line saved here */

    max = 0;
    while ((len = getli(line, MAXLINE)) > 0)
    {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)
    {
        printf("%s", longest);
    }
    return 0;
}

/* reads a line into s, return length */
// Originally the function here is called getline - but this conflicts with the getline in macOS's stdio.h header file. 
int getli(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar()) !=EOF && c!='\n'; ++i)
    {
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

/* copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i; 

    i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}