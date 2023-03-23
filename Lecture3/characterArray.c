// Code to demonstrat elements in character array
#include <stdio.h>
int main()
{
  int i,j;
  char me[20]="Education";
  printf("%s\n",me); // 
  printf("%c ",me[0]);
  printf("%c ",me[1]);
  printf("%c ",me[2]);
  printf("%c ",me[3]);
  printf("%c \n",me[4]);

 for(i=0;i<10;i++){
     printf("%c ",me[i]);
 } 
   return 0;
}


