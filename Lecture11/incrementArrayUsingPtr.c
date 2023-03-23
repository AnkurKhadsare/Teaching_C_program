#include<stdio.h>
// Incrementing an array using pointer.
int main(){
    int a[]={2,5,4};
    int *p=&a[0];
    printf("%d\n",*p);
    p++;
    printf("%d\n",*p);
    p++;
    printf("%d\n",*p);
    return 0;
}