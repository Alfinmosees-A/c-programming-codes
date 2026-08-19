#include<stdio.h>
int main()
{
    int a[20],b[20],i,y,x,n,j=0 ;
     scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    printf("enter the no of rotations:");
    scanf("%d",&x);
    for(i=x+1;i<n;i++)
    {
        b[j++]=a[i];
    }
     for(i=0;i<x;i++)
    {
        a[i+x]=a[i];
    }
    for(i=0;i<x;i++)
    {
        a[i]=b[i];
    }

       for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

}

