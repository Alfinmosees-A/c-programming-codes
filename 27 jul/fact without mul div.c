#include<stdio.h>
int main()
{
    int n,i,fact=0,j,temp;
    scanf("%d",&n);
    if(n==0||n==1)
        printf("fact is 1");
        temp=2;
    for (i=2;i<=n;i++)
    {    if(i!=2)temp=fact;+
        for(j=1;j<i;j++)
        {
            fact+=temp;
        }
    }
     printf("fact is %d",fact);

}
