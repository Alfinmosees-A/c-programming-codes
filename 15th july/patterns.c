#include<stdio.h>
int main()
{
    int i,j,a,k,b;
    scanf("%d",&a);
  /*  for (i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    for (i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
    }
*/b=a;
    for (i=1;i<=a;i++)
    {
         for(j=b;j>=1;j--)
            printf(" ");
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(k=1;k<i;k++)
        {
            printf("*");
    }
    printf("\n");
    b--;

}
}
