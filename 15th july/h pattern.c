#include<stdio.h>
int main()
{
    int i,j,a,k,b=1,c=1,e,l,m=1,d,sum=1;
    scanf("%d",&a);
    d=a;
    e=a;
    for(i=2;i<a;i++)
    {
        b+=2;
    }

    for (i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            printf("0");
            else
                printf("1");
        }
        for(k=b;k>0;k--)
        {
            printf(" ");
            }
            b=b-2;

        for (l=m;l>=1;l--)
        {

            if(l==a){
                continue;
            }
            if(l%2==0)
             printf("0");
             else
                printf("1");

        }


        m++;
        printf("\n");

    }
m=1;
/*
 for(i=2;i<a;i++)
    {
        c+=2;
    } */
c=1;
    for (i=1;i<=a;i++)
    {
        for(j=2;j<=d;j++)
        {
            if(j%2==0)
            printf("1");
            else
                printf("0");
        }d--;
        for(k=0;k<c;k++)
        {
            printf(" ");
            }
            c=c+2;

        for (l=e-1;l>=1;l--)
        {

            if(l==a||l==a+1){
                continue;
            }
           if(l%2==0)
             printf("0");
             else
                printf("1");

        }
      e--;


        printf("\n");

    }




}
