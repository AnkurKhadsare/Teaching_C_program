#include<stdio.h>

int factorial(int n);

int main(){
    int result,n=3;
    result=factorial(1);
    printf("\n Factorial of 1 is : %d\n",result);
    result=factorial(2);
    printf("\n Factorial of 2 is : %d\n",result);
    result=factorial(3);
    printf("\n Factorial of 3 is : %d\n",result);
    result=factorial(4);
    printf("\n Factorial of 4 is : %d\n",result);
    result=factorial(5);
    printf("\n Factorial of 5 is : %d\n",result);
    return 0;
}

int factorial(int n){
    if(n==0)
        return 1;
    return(n*factorial(n-1));
}