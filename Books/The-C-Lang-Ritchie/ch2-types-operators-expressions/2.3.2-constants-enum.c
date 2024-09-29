// Use of enum
#include <stdio.h>

enum DayOfWeek { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, FRIDAY, SATURDAY };

int main() {
    enum DayOfWeek today = 4; 
    
    if (today == FRIDAY) {
        printf("It's Friday!\n");
    }

    return 0;
}