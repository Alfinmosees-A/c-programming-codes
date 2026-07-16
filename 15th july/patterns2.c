#include<stdio.h>
int main()
{
    int i,j,a,k,l;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=i;j<=a;j++)
        {
            printf(" ");

        }
        for(k=1;k<=i;k++)
        {
            printf("%d",k);

        }
        for(l=i-1;l>=1;l--)
        {
            printf("%d",l);
        }

        printf("\n");
    }
}
