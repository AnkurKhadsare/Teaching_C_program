#include<stdio.h>

int main(){
    int length;
    int array[10];
    int i,position;
    
    printf("\nEnter the length of array:");
    scanf("%d",&length);
    if(length<=10&&length>0){
        for(i=0;i<length;i++){
            printf("\nEnter the %dth Element: ",i+1);
            scanf("%d",&array[i]);
        }
        printf("Array as entered by user :");
        for(i=0;i<length;i++){
            printf("%d ",array[i]);
        }

        printf("\nEnter the pos to be deleted :");
        scanf("%d",&position);
        if(position<=0||position>length){
            printf("\nPlease specify the correct position");
        }
        else{
            for(i=position-1;i<length;i++){
                array[i]=array[i+1];
            }
            printf("\nNew array after delition is :");
            for(i=0;i<length-1;i++){
            printf("%d ",array[i]);
        }
        }
    }
    else{
        printf("Array out of bounds");
    }

    return 0;
}