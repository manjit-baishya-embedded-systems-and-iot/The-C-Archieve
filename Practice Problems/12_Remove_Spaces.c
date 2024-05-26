#include <stdio.h>

void removeSpaces(char* str) {
    int i = 0, j = 0;
    while (str[i]) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
    char str[] = "Hello, World!";
    removeSpaces(str);
    printf("String without spaces: %s\n", str);
    return 0;
}