#include<stdio.h>
#include<string.h>

// strcmp(string1,string2)

int main(){
	// program to copy a string
	int result=0;
	int len1,len2;
	char string1[]="imp";
	char string2[]="This is imp solution imp is imp";
	 
	//result=strcmp(string1,string2);
	//printf("\nThe result is %d\n",result);
	len1 = strlen(string1);
	len2 = strlen(string2);
	char tempstr[len1];

	for(int i=0;i<len2-len1+1;i++){
		for(int j=0;j<3;j++){
			tempstr[j]=string2[i+j];
		}
		printf("%s\n",tempstr);
		if(strcmp(string1,tempstr)==0)
		result++;
	}
	printf("Length 1: %d\n",len1);
	printf("Length 2: %d\n",len2);
	printf("\nResult: %d\n",result);
	return 0;
}

/* Search for a given word in a sentence.
Word to search : imp
Given sentence : This is imp solution imp is imp
Hint : Use strcmp(string1,string2) -> Returns 0 if match found
*/

// Print all the 3 letter words .
// length of string1
// length of string2
// Number of matches found.
