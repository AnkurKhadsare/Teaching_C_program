// Important string functions
#include<stdio.h>
#include<string.h>
//2 copy one string into another
int main(){
    // program to copy a string
	char word[]="Simple";
	char cpyword[20]="Something";
	//strcpy(target,source);
	strcpy(cpyword,word);
	printf("\nThe copy of string is %s\n",cpyword);
	return 0;
}