#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main () {
   int val;
   char str[20]="45789";
   // string  to integer
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);
   
   strcpy(str, "Ankur");
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   

   return(0);
}