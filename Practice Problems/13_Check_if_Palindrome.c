#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(const char* str) {
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right) {
        if (tolower(str[left]) != tolower(str[right])) {
            return 0;  // not a palindrome
        }
        left++;
        right--;
    }
    return 1;  // is a palindrome
}

int main() {
    char str[] = "Madam";
    if (isPalindrome(str)) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }
    return 0;
}