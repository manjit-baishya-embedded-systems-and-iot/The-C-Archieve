#include<stdio.h>

int main(){
    int num, ans;
    printf("Enter number: ");
    scanf("%d", &num);

    for(int i=0; i<num; i++){
        ans = num*(num-1);
        num--;
        
    }
}