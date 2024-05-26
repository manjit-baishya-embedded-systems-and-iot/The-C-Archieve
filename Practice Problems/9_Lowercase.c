#include <stdio.h>
#include <ctype.h>

void toUppercase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char str[] = "Hello, World!";
    toUppercase(str);
    printf("Uppercase string: %s\n", str);
    return 0;
}