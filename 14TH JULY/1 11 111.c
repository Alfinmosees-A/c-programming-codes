#include<stdio.h>
int main()
{
    int a,n,sum=0,i,pow=1,fi;
    scanf("%d %d",&a,&n);
    for(i=0;i<n;i++)
    {
        sum=sum+(a*pow);
        pow*=10;
        fi+=sum;

    }printf("%d",fi);
}
