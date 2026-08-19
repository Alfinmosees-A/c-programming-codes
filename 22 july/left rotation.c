#include<stdio.h>
int main()
{
    int a[20],b[20],i,y,x,n;
     scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    printf("enter the no of rotations:");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        b[i]=a[i];
    }
     for(i=0;i<n-x;i++)
    {
        a[i]=a[i+x];
    }
    i=0;
    y=n-x;
    for(y;y<n;y++)
       a[y]=b[i++];

       for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

}
