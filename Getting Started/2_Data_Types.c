#include<stdio.h>

int main(){
    int a = 90;
    float b = 91.89;
    double c = 109628356891;
    char x = 'y';
    char name[100] = "Manjit Baishya";

    printf("Size of integer data type is: %d\n", sizeof(a));
    printf("Size of float data type is: %d\n", sizeof(b));
    printf("Size of double data type is: %d\n", sizeof(c));
    printf("Size of character data type is: %d\n", sizeof(x));
    printf("Size of string data type is: %d\n", sizeof(name));
}