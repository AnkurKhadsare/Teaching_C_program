#include<stdio.h>

int main(){
    char str1[100];
     char str2[100];
    printf("Enter string1:\n");
    scanf("%[^\n]",str1);
    printf("String1 : %s",str1);
    
    /*printf("Enter string2:\n");
    gets(str2);
    printf("String2 : %s",str2);
    */
    return 0;
}