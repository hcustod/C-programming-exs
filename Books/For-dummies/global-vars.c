#include <stdio.h>

void half(void);
void twice(void);

int age;
float feet;

int main()
{
    printf("How old are you: ");
    scanf("%d", &age);
    printf("How tall are you (in feet): ");
    scanf("%f",&feet);
    printf("You are %d yearsr old and %.1f feet tall.\n",age,feet);
    half();
    twice();
    printf("But you're not really %d years old or %.1f feet tall.\n",age,feet);
    return 0;
}

void half(void)
{
    float a,h;

    a=(float)age/2.0;
    printf("half your age is %.1f.\n", a);
    h=feet/2.0;
    printf("Half your height is %.1f.\n", h);
}

void twice(void)
{
    age*=2;
    printf("Twice your age is %d. \n", age);
    feet*=2;
    printf("twice your height is %.1f\n", feet);
}