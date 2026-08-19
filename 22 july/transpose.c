#include<stdio.h>
int main()
{
    int a[20][20],b[20][20],n,m,i,j;
    printf("enter row for 1st mat:");
    scanf("%d",&m);
    printf("enter col for 1st mat:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
            for(j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }
    }
     for(i=0;i<n;i++)
    {
            for(j=0;j<m;j++)
            {
                b[j][i]=a[i][j];
            }
    }
      for(i=0;i<n;i++)
    {
            for(j=0;j<m;j++)
            {
                printf("%d",b[i][j]);
            }
            printf("\n");
    }

}
