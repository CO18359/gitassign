#include<stdio.h>
void main()
{
	int a,b,c,k=1,l=0;
	printf("\n enter value of a : ");
	scanf("%d",&a);
	printf("\n enter value of b: ");
	scanf("%d",&b);
	printf("\n enter value of c : ");
	scanf("%d",&c);
	if(a+b>c && b+c>a && c+a>b)
	{
		printf("%d",l);
	}
	else
	{
		printf("%d",k);
	}
	
}
