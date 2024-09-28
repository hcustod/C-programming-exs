// Not an official example
// How to write an array of strings, given string is not a datatype in C
// Also, strings in C are an array of chars
#include <stdio.h>

int main() {
    // Declare and init array of pointers to constant characters
    const char *students[] = {
        "Alice",
        "Bob",
        "Arn",
        "Pickle"
    };

    // Get num of elements in the array
    int numStudents = sizeof(students) / sizeof(students[0]);

    // Loop and print each string
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: %s\n", i + 1, students[1]);
    }

    return 0;
}







