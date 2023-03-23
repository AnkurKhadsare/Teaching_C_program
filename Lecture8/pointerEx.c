#include<stdio.h>

int main(){
    int i=5;  
    int *p=&i;
    int *pz;
    pz=&i;
    printf("1. Value if i: %d \n",i);
    printf("2. Address of  i: %d \n",&i);
    printf("3. Value of  i: %d \n",*(&i));
    printf("4. Address of  i: %d \n",p);
    printf("5. Value of  i: %d \n",*p);
    printf("6. Address of  i: %d \n",pz);
    printf("7. Value of  i: %d \n",*pz);
    return 0;
}

