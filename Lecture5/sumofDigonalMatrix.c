// Sum of digonal elements in a matrix : a_00+a_11+a_22

#include<stdio.h>

int main(){
    int i, N=3;
    int matrixA[3][3]={1,1,1,2,2,2,3,3,3};

    int digonalSum=0;
    for(i=0;i<3;i++){
        digonalSum+=matrixA[i][N-1-i];
    }
    printf("\nSum of digonal elements is : %d\n",digonalSum);
    return 0;
}
//Try :
// 1. Sum of all elements 
// 2. Sum of alternate digonal 

