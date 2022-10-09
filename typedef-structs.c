#include <stdio.h>

typedef struct id
{
    char first[20];
    char second[20];
} personal;

typedef struct date
{
    int month;
    int day;
    int year;
} calendar; 

struct human
{
    personal name;
    calendar birthday;
};
