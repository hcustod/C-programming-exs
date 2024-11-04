#include <stdio.h>
#include <ctype.h>

int htoi(const char s[]) {
    int i = 0, result = 0, digit;

    // Skip optional 0x and 0X
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        i = 2;
    }

    // Iterate through each char in string and convert. 
    while (s[i] != '\0') {
        if (isdigit(s[i])) {
            digit = s[i] - '0';
        } else if (s[i] >= 'a' && s[i] <= 'f') {
            digit = s[i] - 'a' + 10;
        } else if (s[i] >= 'A' && s[i] <= 'F') {
            digit = s[i] - 'A' + 10;
        } else {
            break;
        }

        result = result * 16 + digit;
        i++;
    }

    return result;
}

int main() {
    char hexString[] = "0x1a3f";
    printf("The decimal value of %s is %d\n", hexString, htoi(hexString)); // Should print 6719. 
    return 0; 
}