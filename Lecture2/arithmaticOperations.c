#include<stdio.h>

int main(){
int a,b,c;
a=50;
b=10;
c= 5;

int add,sub,mult,div;
add=a+b+c;  
sub=a-b; 
mult=a*b;
div=a/b;
// Print the results 
printf("Addition :%d\n",add);
printf("Subtraction :%d\n",sub);
printf("Multiplication :%d\n",mult);
printf("Division :%d\n",div);
/*
// Shotcut Way
printf("Addition :%d\n",a+b+c);
printf("Subtraction :%d\n",a-b);
printf("Multiplication :%d\n",a*b);
printf("Division :%d\n",a/b);
*/
    return 0;
}