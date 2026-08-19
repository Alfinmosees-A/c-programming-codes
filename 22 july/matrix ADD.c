#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,n,m;
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
    printf("\n for second matrix\n");
    for(i=0;i<n;i++)
    {
            for(j=0;j<m;j++)
            {
                scanf("%d",&b[i][j]);
            }
    }

     for(i=0;i<n;i++)
    {
            for(j=0;j<m;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
    }

     for(i=0;i<n;i++)
    {
            for(j=0;j<m;j++)
            {
                printf("%d",c[i][j]);
            }
    }

}
