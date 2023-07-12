#include<stdio.h>
int main()
{
	int a[10],even=0,odd=0;

for(int i=0;i<=10;i++)
{
	a[i]=i;
	if(a[i]%2==0)
	{
	even=even+a[i];
	printf("%d\n",a[i]);
	}
	else
	{
	odd=odd+a[i];
	printf("%d\n",a[i]);
	}
}
	printf("even total:%d\t",even);
	printf("odd total:%d\n",odd);
	
return 0;
}