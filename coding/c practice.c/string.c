#include<stdio.h>
void main()
{
	int marks;
	printf("marks=");
	scanf("%d",&marks);
	
	if(marks>91)
	{
		printf("excellent");
	}
	else if(marks>81)
	{
		printf("very good");
	}
	else	if(marks>71)
	{
		printf("good");
	}
else	if(marks>61)
	{
		printf("can do better");
	}
else	if(marks>61)
	{
		printf("average");
	}
	else
	{
		printf("fail");
	}
}