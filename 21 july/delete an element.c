#include<stdio.h>
int main()
{
   int a[20],b,n,i,j,dup,count=0;

    scanf("%d",&n);
     for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the num to delete:");
    scanf("%d",&b);
    for(i=0;b!=a[i];i++){}

    for(i;i<n-1;i++)
    {
        a[i]=a[i+1];
    }

     for(i=0;i<n-1;i++)
    {
        printf("%d",a[i]);
    }

}
