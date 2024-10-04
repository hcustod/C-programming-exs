// Type conversion example from chat gpt.
#include <stdio.h>

int main() {
    
    int a = 5;
    double b;

    // Implicit type conversion
    b = a;  // a which is an int, is auto converted to what b is (double)
    printf("Implicit type conversion: a = %d, b = %f\n", a, b);

    // Explicit type conversion (casting); double to int
    double x = 9.75;
    int y;

    y = (int)x; // casting x (double) to int
    printf("Explicit onversion: x = %f, y = %d\n", x, y);

    return 0;






}
