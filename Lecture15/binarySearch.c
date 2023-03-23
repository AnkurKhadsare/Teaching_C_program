#include<stdio.h>

int binarySearch(int a[],int i,int j,int key);

int main(){
    int a[]={1,3,5,7,9,12,15,18,20};
    int length = 9;
    int findNo = 100;
    printf("\n%d\n",(binarySearch(a,0,length-1,findNo))); //+1
    return 0;
}

int binarySearch(int a[],int i,int j,int key){
    int c;
    if(i<=j){
        c=(i+j)/2;//center of array
        if(key==a[c])
            return c;
        if(key>a[c]){
            return(binarySearch(a,c+1,j,key));
        }
         return(binarySearch(a,i,c-1,key));  
    }
    return (-1);
}

