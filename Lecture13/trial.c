#include<stdio.h>
#include<string.h>
int main(){
char a[]= "jdlsfk kljf^ls kld@ asd$";
int i,j,length,count;
char b[100]={};
length=strlen(a);

for(i=0,j=0;i<length;i++){
    if(a[i]=='^'||a[i]=='@'||a[i]=='$'){
        count++;
    }
    else{
        b[j]=a[i];
        j++;
    }
}
printf("\nString :%s\n",b);
printf("Count:%d\n",count);
}
