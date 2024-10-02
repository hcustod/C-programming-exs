// Just a simple outside example of what is discussed in this section
#include <stdio.h>

int main() {

    int a = 10, b = 5;
    int isTrue;

    // Relational operators
    isTrue = (a > b);
    printf("a > b: %d\n", isTrue);

    isTrue = (a == b);
    printf("a == b: %d\n", isTrue);

    // Logical operators
    isTrue = (a > 0 && b > 0);
    printf("Both a and b are positive: %d\n", isTrue);

    isTrue = (a > 0 || b < 0);
    printf("Either a is positive or b is negative: %d\n", isTrue);

    return 0;
}