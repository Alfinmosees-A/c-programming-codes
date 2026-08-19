#include<stdio.h>
int main()
{
   int a[20],b,n,i,j,dup,count=0;

    scanf("%d",&n);
     for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the num to insert:");
    scanf("%d",&b);

   for(i=0;a[i]<b;i++){}
   dup=a[i];
   a[i]=b;
   i++;
   while(i<n)
    {
        b=a[i];
        a[i]=dup;
        dup=b;

        i++;


    }
    a[i]=dup;

    for(i=0;i<=n;i++)
    {
        printf("%d",a[i]);
    }

}
