#include<stdio.h>
int main()
{
   int a[20],n,i,j,dup,count=0;

    scanf("%d",&n);
     for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        dup=0;
        for(j=0;j<n;j++)
        {
            if(i==j)
                continue;
            if(a[i]==a[j])
                dup++;
        }
        if(dup==0){
             printf("%d",a[i]);
             count++;
    }
    }
       printf("the count is :%d",count);
}
