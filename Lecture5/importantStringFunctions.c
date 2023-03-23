#include<stdio.h>
#include<string.h>
// Important string functions
int main(){
    char word[]="Somtimes";
    int length1;
    // 1. strlen : length of the string
    length1 =strlen(word);
    printf("\nLength of %s is : %d\n",word,length1);

    // Can you write code for the same. (Dont forget '\0')
    return 0;
}