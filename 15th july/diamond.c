#include<stdio.h>
int main()
{
    int i,j,a,k,l,m,n,o=1,p,b;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=i;j<a;j++)
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

    b=a;
   for(i=1;i<a;i++)
     {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }

       for(n=1;n<b;n++)
        {

            printf("%d",n);

        }
       for(p=n-2;p>=1;p--)
        {
            printf("%d",p);
        }
        printf("\n");
       b--;
   }

}
