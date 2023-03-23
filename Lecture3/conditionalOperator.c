#include <stdio.h>
#include<stdlib.h>
int main()
{
    int x=10,y=14,z,nz;
    z=x%5?(50*2):(100*2);

    printf("\nValue of z is %d\n",z);

    nz=y%5?50:100;
    // (condition) ? true :false
    printf("\nValue of nz is %d\n",nz);
   return 0;
}

