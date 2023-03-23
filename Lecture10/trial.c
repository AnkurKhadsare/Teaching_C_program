#include <stdio.h>
int main()
{
char a='Z';
char *p=&a;
printf("%d\n",p);
p++;
printf("%d\n",p);
p--;
printf("%d\n",p);
return 0;
}


