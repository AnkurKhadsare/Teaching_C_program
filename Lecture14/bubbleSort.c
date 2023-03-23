#include<stdio.h>

int main(){
    // Bubble sort
    int i,j,temp;
    int k=0;
    int a[]={100,47,79,54,46,67};
    int length =6;
   
    for(k=0;k<length;k++){
            printf("%d ",a[k]);
        }
    k=0;
    printf("\n-----------------\n");
    for(i=1;i<length;i++){
        for(j=0;j<length-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
           
        }
        for(k=0;k<length;k++){
            printf("%d ",a[k]);
        }
       printf("\n-----------------\n");
    } 
    return 0;
}