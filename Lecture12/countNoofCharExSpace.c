#include <stdio.h>
#include <string.h>

void shift(int a[]);
int main()
{
   char str[200]="Manoj is his own Boss";
   int i,N,count=0;
   N=strlen(str);
   
   for(i=0;i<N;i++){
       if(str[i]==' ')
       count++;
   }
   
   printf("Total char excluding space: %d",N-count);
  return 0;
}
/*
 int x(int a[],int n){
  if(n==1)
    return(a[0]);
  else
    return(a[n-1]+x(a,n-1));
}
n=1 //a[0]
n=2 // a[2-1]+(x(a,2-1))
// a[1]+(x(a,1))
// a[1]+a[0]

n=3 
//a[2]+x(a,2)
//a[2]+a[1]+a[0]

n=4
// a[3]+x(a,3)
// a[3]+a[2]+a[1]+a[0]


// Assignment Question
[1,2,3],
[4,5,6],
[5,6,7]

Sum of row 1 is : 
Sum of row 2 is :
Sum of row 3 is :

Sum of column 1 is :
Sum of column 2 is :
Sum of column 3 is :
*/