#include <stdio.h>

void shift(int a[]);

int main()
{
   int a[]={1,2,3,4,5};
   int i;
   shift(a);
   for(i=0;i<5;i++){
       printf("%d",a[i]);
   }
   printf("\n");
   shift(a);
   for(i=0;i<5;i++){
       printf("%d",a[i]);
   }
    return 0;
}

void shift(int a[]){
   int i,temp=a[4];
   
   for(i=0;i<5;i++){
       a[5-i]=a[5-i-1];
   }
   a[0]=temp;
   
}

// a={1,3,4,5,6,7} =(4+5)/2
// a={1,2,3,6,7}

