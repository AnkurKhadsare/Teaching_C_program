// How to find the size of array.
#include<stdio.h>

int main(){
    int array1[] ={1,2,3,4,5}; 
    //char characters[] = {'a','e','i'};
    // 4*5/4 =5
    int size = sizeof(array1) / sizeof(array1[0]);
    printf("\nSize:%d\n",size);
    return 0;
}

