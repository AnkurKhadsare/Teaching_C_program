#include <stdio.h>

int *move1(){
    int a=1;
    printf("MOVE DONE");
    return (&a);
}
int main(){
    int *x;
    x=move1();
    printf("%d",*x);
    return 0;
}