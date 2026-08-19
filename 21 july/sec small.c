#include<stdio.h>
int main()
{
    int a[20],i,n,j,temp,small;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    small=a[0];
    temp=a[1];
    if (small>temp)
    {
        j=small;
        small=temp;
        temp=j;

    }
    for(i=2;i<n;i++)
    {
         if(a[i]<small){

             temp=small;
             small=a[i];
         }
        else if(a[i]<temp&&a[i]>small)
            temp=a[i];
    }

   printf("%d",temp);
}


