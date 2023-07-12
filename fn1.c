#include<stdio.h>
char reverse()
{
	char a[50],b[50];
	int i,j=0;
	
	for(i=0; a[i] != '\0'; i++)
	{}
	for(a[i]!='\0'-1;i>=0;i--)
{

	b[j]= a[i];
	j++;
}
	b[j]='\0';
	
return b[j];
}

int main()
{
char a[50],b[50];
	int i,j=0;
	printf("enter:");
	scanf("%s",&a);
	printf("reverse string:%s",b);
}





