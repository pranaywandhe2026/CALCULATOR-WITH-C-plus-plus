#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    float a=100;
    for(int i=1;i<=n;i++)
    {
        printf("%f\n",a);
        a=a/2;
    }
    
}