#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,n,m,o,p,x;
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
    print:
    printf("\n for second matrix\n");
    printf("enter row for 2nd mat:");
    scanf("%d",&p);
    printf("enter col for 2nd mat:");
    scanf("%d",&o);
    if(n!=p)
     {
        printf("not valid");
        goto print;
     }
    for(i=0;i<o;i++)
    {
            for(j=0;j<p;j++)
            {
                scanf("%d",&b[i][j]);
            }
    }


     for(i=0;i<n;i++)
    {  x=0;
            for(j=0;j<m;j++)
            {
                x+=a[i][j]*b[j][i];
            } printf("%d\n",x);
            x=0;
            for(j=0;j<m;j++)
            {
                x+=a[i][j]+b[i][j+1];
            } printf("%d\n",x);
    }


 /*    for(i=0;i<n;i++)
    {
            for(j=0;j<m;j++)
            {
                printf("%d",c[i][j]);
            }
    }
 */
}
