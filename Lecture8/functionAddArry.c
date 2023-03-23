#include<stdio.h>
// write a function to increment the given array by n
void addArray(int n,int length,int array[]);

int main(){
    int n=2,length=5;
    int array[]={1,2,3,4,5};
    addArray(n,length,array);
    return 0;
}

void addArray(int n,int length,int array[]){
    int i;
    for(i=0;i<length;i++){
        array[i]+=n;
    }
    printf("\nArray after increment by %d :",n);
    for(i=0;i<length;i++){
        printf("%d ",array[i]);
    }
    printf("\n");

}