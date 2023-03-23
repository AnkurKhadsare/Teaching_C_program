#include<stdio.h>
int rhs(int ,int ,int );
int main(){
    int a=3,b=4,c=5;
    if((a==b)||(a==c)||(b==c)){
        if((a==b)&&(a==c)){
            printf("Equal\n");
        }
        else{
            printf("isocoles\n");
            if(rhs(a,b,c)==1){
            printf("RHS tringle");
        }
        } 
    }
    else{
        printf("Sclen\n");
        if(rhs(a,b,c)==1){
            printf("RHS tringle");
        }
    }
    return 0;
}

int rhs(int a,int b,int c)
{
    if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(c*c+b*b==a*a))
    return 1;
return 0;
}