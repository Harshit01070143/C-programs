#include<stdio.h>
void main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==1)
    printf("prime");
    else
    printf("not");
}