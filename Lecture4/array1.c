#include<stdio.h>
// 2 D matrix
int main(){
    int i,j;
    int matrixA[3][3]={1,1,1,2,2,2,3,3,3};
    int matrixB[3][3]={{5,5,5},{6,6,6},{7,7,7}};
    int matrixC[3][3];
    for(i=0;i<3;i++){
        for ( j = 0; j < 3; j++)
        {
            matrixC[i][j]=matrixA[i][j]+matrixB[i][j];
           
        }
        
    }
    for(i=0;i<3;i++){
        for ( j = 0; j < 3; j++)
        {
           printf("%d ",matrixC[i][j]);
           
        }
        
        printf("\n");
    }
    return 0;
}