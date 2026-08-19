#include<stdio.h>
int main()
{
   int a[20],c[20],b[40],n,m,i,j,k=0,dup,count=0;
    printf("enter the n :");
    scanf("%d",&n);
    printf("enter the elements in sorted :");
     for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("enter the m :");
   scanf("%d",&m);
    printf("enter the elements in sorted :");
     for(i=0;i<m;i++)
    {
        scanf("%d",&c[i]);
    }

   i=0;
   j=0;
  while(k!=n+m)
   {
       if(a[i]>c[j])
       {
           b[k++]=c[j++];
       }
       else
        b[k++]=a[i++];

   }

  printf("i=%d,j=%d",a[i],j);
    for(i=0;i<k;i++)
    {
        printf("%d",b[i]);
    }

}
