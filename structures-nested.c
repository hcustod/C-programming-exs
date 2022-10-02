#include <stdio.h>
#include <string.h>

int main()
{
    struct date
    {
        int month, day, year; /* data */
    };
    struct human
    {
        char name[45];
        struct date birthday;
    };
    struct human president;

    strcpy(president.name, "George Washington");
    president.birthday.month = 2; 
    president.birthday.day = 22;
    president.birthday.year = 1732;

    printf("%s was born on %d/%d/%d\n",
            president.name,     
            president.birthday.day,   // I flipped the day with month because of fucking sense. 
            president.birthday.month,
            president.birthday.year);

    return 0; 
    
}

