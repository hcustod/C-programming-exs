#include <stdio.h>

int main()
{
    char lead;
    char *sidekick;

    lead = 'A';         // initialize char variable
    sidekick = &lead;   // initialize pointer IMPORTANT!

    printf("--------------------------\n");
    printf("About variable 'lead' : \n");
    printf("--------------------------\n");
    printf("Size\t\t%zd\n", sizeof(lead));
    printf("Contents\t%c\n", lead);
    printf("Location\t%p\n", &lead);
    printf("--------------------------\n");
    printf("About variable 'sidekick' (A pointer) :\n");
    printf("--------------------------\n");
    printf("Contents\t%p\n", sidekick);

    return 0; 
}
