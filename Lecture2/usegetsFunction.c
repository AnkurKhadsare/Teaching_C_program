#include <stdio.h>
int main()
{
char name[200];
printf("Name some random name you know:");
gets(name); 
printf("Yeah, I think %s is a good name\n",name);

return(0);
}