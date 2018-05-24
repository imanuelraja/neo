#include<stdio.h>
void main()
{
	int a,b;
	printf("input:\n");
	scanf("%d%d",&a,&b);
	a=a ^ b;
	b=a ^ b;
	a=a ^ b;
	printf("\n Swap:\n");
	printf("a=%d\nb=%d",a,b);	
}
