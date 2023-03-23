#include<stdio.h>

int main(){
    char str[10][10]={"one","two","three","four","five","six","seven","eight","nine"};
    int i,f=0,a,b;
    printf("\nEnter a: ");
    scanf("%d",&a);
    printf("\nEnter b: ");
    scanf("%d",&b);

    if(a<=0){
        printf("Beyond scope\n");
    }
    if((a>0 && a<=9)&&b>=a)
    {
        if(b>9){
            b=9;
            f++;
        }
        for(i=a-1;i<=b;i++){
            printf("\n%s",str[i]);
        }
        if (f==1)
        {
          printf("\nBeyond Scope");
        }
        
    }
    if(a>9||b<a){
         printf("\nBeyond Scope");
    }
    return 0;
}


