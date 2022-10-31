#include <stdio.h>

int main()
{
    int array[5] = { 2,3,5,7,11 };

    printf(" 'array' is at address %p\n", &array);
    printf(" 'array' is at address %p\n", array);  // do not need the & for arrays... why?

    return 0;
}

