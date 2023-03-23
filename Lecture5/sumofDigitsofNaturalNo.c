// Sum of digits of a natural number 

#include<stdio.h>

int main(){
    int sum=0,number;
    printf("\nEnter the number : ");
    scanf("%d",&number);
    while(number!=0){
        sum= sum+(number%10);
        number=number/10;
    }
    printf("\nsum of digits of number is : %d\n",sum);
    return 0;
}