#include<stdio.h>

int fib(int n);

int main(){
    int result,n=5;
    result=fib(1);
    printf("\n Fibonacci of 1 is : %d\n",result);
    result=fib(2);
    printf("\n Fibonacci of 2 is : %d\n",result);
    result=fib(3);
    printf("\n Fibonacci of 3 is : %d\n",result);
    result=fib(4);
    printf("\n Fibonacci of 4 is : %d\n",result);
    result=fib(5);
    printf("\n Fibonacci of 5 is : %d\n",result);
    return 0;
}

int fib(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return(fib(n-1)+fib(n-2));
}


