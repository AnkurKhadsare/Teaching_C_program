#include <stdio.h>
#include<stdlib.h>
int main()
{
  int i,j;
  char small[30]="abcdefghijklmnopqrstuvwxyz";
  char large[30]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char numbers[10]="0123456789";
 printf("Ascii values for a-z :\n"); 
 for(i=0;i<26;i++){
     printf("%d ",small[i]);
 } 
 
 printf("\nAscii values for A-Z :\n");
 for(i=0;i<26;i++){
     printf("%d ",large[i]);
 }
 printf("\n");

  printf("\nAscii values for 0-9 :\n");
 for(i=0;i<10;i++){
     printf("%d ",numbers[i]);
 }
 printf("\n");
   return 0;
}

