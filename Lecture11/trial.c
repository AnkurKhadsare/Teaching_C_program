#include<stdio.h>
#include<string.h>
int main(){
    char temp,a[20];
    int i,N;
    printf("Enter the word :\n");
    scanf("%s",&a);
    N=strlen(a);
    //swap
    for(i=0;i<N/2;i++){  //ankur
        temp=a[i];   // temp =a
        a[i]=a[N-1-i]; //a[i]= r
        a[N-1-i]=temp; //a[N-1-i]=a
    }
    printf("Reverse word : %s\n",a);
    return 0;
}
