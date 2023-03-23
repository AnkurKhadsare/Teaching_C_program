#include <stdio.h>

int main(){

    char me[20]; // will take string as an argument
    printf("What is your name?\n");
    scanf("%s",&me);
    printf("Hello :%s!!\n",me);

    return 0;
}