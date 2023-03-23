//  Write a program to read and display the elements of an array
// along with the total number of even and odd number.

#include<stdio.h>

int main(){
    int even=0,odd=0,i;
    int arr[10]={10,31,44,50,23};
    
    for(i=0;i<5;i++){
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }

    printf("\nTotal Odd no's in array : %d\n",odd);
    printf("Total Even no's in array : %d\n",even);
    return 0;
}