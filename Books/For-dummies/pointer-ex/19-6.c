// using a pointer to display a string


#include <stdio.h>

int main()
{
    const char *sample = "From whence cometh my help?\n";

    puts(sample);
    return 0; 
}



/*

int main()
{
    char sample[] = "From whence cometh my help?\n";
    int index = 0;

    while(sample[index] != '\0')
    {
        putchar(sample[index]);
        index++;
    }
    return 0;
}

*/