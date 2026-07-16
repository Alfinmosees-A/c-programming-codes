#include<stdio.h>
int main()
{
    int i,j,a,k,l,b,x,y;
    scanf("%d",&a);
    b=a-1;
    for(i=1;i<=a;i++)
    {
        for(j=i;j<a;j++)
        {
            printf(" ");

        }
        for(k=1;k<=i;k++)
        {  if(k==1)
            printf("*");
            else
                printf(" ");

        }
        for(l=i-1;l>=1;l--)
        {  if(l==1)
            printf("*");
            else
                printf(" ");
        }

        printf("\n");

    }

    for(i=1;i<=a;i++)
    {

       for (j=1;j<=i;j++)
       {
           printf(" ");
       }
        for(x=1;x<=b;x++)
        {
            if(x==1)
                printf("*");
            else
                printf(" ");
        }
        for (y=x-2;y>=1;y--)
        {
            if(y==1)
                printf("*");
            else
                printf(" ");
        }
        b--;
        printf("\n");
    }

}
