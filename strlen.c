#include<stdio.h>
int main()
{
char a[]="fun";
int i;
for(i=0; a[i] != '\0'; i++){}

printf("%d",i);

return 0;
}