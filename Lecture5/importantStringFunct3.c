#include<stdio.h>
#include<string.h>

//3. strcat(target,source)   
int main(){
	// program to copy a string
	char line1[]=" more effective in life";
	char line2[]="simple things are";
	//strcat(target,source)
	strcat(line2,line1);
	printf("\nThe resultant string :\n %s\n",line2);
	return 0;
    //result = line2 + line1;
}