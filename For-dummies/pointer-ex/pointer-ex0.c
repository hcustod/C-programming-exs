#include <stdio.h>

int main()
{
    char alphabet[26];
    int x;
    char *pn;

    pn = alphabet;

    for(x=0;x<26;x++)   // fill array
    {
        *pn=x+'A';
        pn++;
    }

    for(x=0;x<26;x++)
        printf("Alphabet[%d] = %c\n",
                x, alphabet[x]);

    
    return 0;

}