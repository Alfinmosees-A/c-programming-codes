#include<stdio.h>
int main()
{
    int i,j,a,k,b,x,c;
    scanf("%d",&a);
  b=a;
    for (i=1;i<=a;i++)
    {
         for(j=b;j>=1;j--)
            printf("  ");
        for(j=1;j<=i;j++)
        {
            printf("  * ");
        }
      printf("\n");
          b--;
    }
    c=a;
for(x=1;x<a;x++){
        for(j=1;j<=x+1;j++)
        {
            printf("  ");
        }
for (i=c-1;i>=1;i--)
{
    printf("  * ");
}c--;
printf("\n");
}

}
