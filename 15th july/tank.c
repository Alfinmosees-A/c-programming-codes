#include<stdio.h>
int main()
{
    int i,j,a,k,b=1
    ,l,m=1,sum=1;
    scanf("%d",&a);

    for(i=2;i<a;i++)
    {
        b+=2;
    }

    for (i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
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
             printf("%d",l);

        }


        m++;
        printf("\n");
    }
}
