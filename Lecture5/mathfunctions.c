// Important math functions : sqrt and pow
#include<stdio.h> 
#include<math.h> 
int main()
{
 float result,value=9;
 //printf("Input a float value: ");
 //scanf("%f",&value);
 result = sqrt(value); //
 printf("The square root of %.2f is %.2f\n", value,result);
 result = pow(value,3); //value^3
 printf("%.2f to the 3rd power is %.2f\n",value,result);
 return(0);
}

// 1 to 20 : squres print