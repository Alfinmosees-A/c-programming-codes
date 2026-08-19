#include<stdio.h>
int main()
{
    int a[20],b[50],i,n,j,temp,small;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;
    for(j=n-1;j>=0;j--)
    {
        b[i++]=a[j];

    }

    for(i=0;i<n;i++)
    {

        printf("%d",b[i]);
    }
}
