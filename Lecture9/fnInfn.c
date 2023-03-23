#include<stdio.h>

void india();
void maharashtra();
void satara();
void wai();

int main(){
    printf("\nI am in main\n");
    india();
    return 0;
}

void india(){
    printf("\nI am in india\n");
    maharashtra();
}

void maharashtra(){
    printf("\nI am in maharashtra\n");
    satara();
}

void satara(){
    printf("\nI am in satara\n");
    wai();
}

void wai(){
    printf("\nI am in wai\n");
}