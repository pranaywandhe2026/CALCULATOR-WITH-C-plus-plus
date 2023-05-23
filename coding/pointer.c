#include<stdio.h>
void main()
{
    char a[10],b[20];
    printf("enter the two strings");
    scanf("%s %s",&a,&b);
    printf("strcat(a,b)=%s",strcat(a,b));
}