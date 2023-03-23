#include<stdio.h>

void checkOEM(int length,int array[]);

int main(){
    int i,array1[]={2,2,6,4};
    int array2[]={5,7,9,11,13};
    int array3[]={2,9,6,4};
    
    checkOEM(4,array1);
    checkOEM(5,array2);
    checkOEM(4,array3);

    return 0;
}

void checkOEM(int length,int array[]){
    int i,odd=0,even=0;
    for(i=0;i<length;i++){
        if(array[i]%2==0)
            even++;
        else
        odd++;
    }
    if(odd==length){
        printf("Array is odd\n");
    }
    else if(even==length){
        printf("Array is even\n");
    }
    else
     printf("Array is Mixed\n");
}