#include <stdio.h>

int main()
{
    int code;

    printf("Enter the error code (1-3): ");
    scanf("%d", &code);

    switch(code)
    {
        case 1:
            printf("Drive failure not your fault.\n");
            break;
        case 2:
            printf("Illegal format, call support.\n");
            break;
        case 3:
            printf("Bad filename, call support.\n");
            break;
        default:
            printf("That is not a valid option, must be --> 1, 2, or 3.\n");
    }
    return(0);
}
