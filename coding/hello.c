#include<stdio.h>
void main()
{
	int r,s ,a;
	printf("enter ages");
	scanf("%d%d%d",&r,&s,&a);
	if(r<s ||  s>a)
	{
		if(r<a)
		{
			printf(" ram is youngest");
		}
		else
		{
			printf("ajay is youngest");
		}
		
	}
	else{
		printf("shyam is youngest");
	}
}
