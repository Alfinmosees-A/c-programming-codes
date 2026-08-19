#include<stdio.h>
int main()
{
    int m,n,i,a[100][100],j,count=0,fi=0,row=-1;
    printf("enter the rows and columns: ");
    scanf("%d%d",&n,&m);
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {   count=0;
        for (j=0;j<m;j++)
        {
            if(a[i][j]==1){
                count++;
            }
        }
        if(count>fi)
        {
            fi=count;
            row=i;
        }

    }

    printf("%d",row);

}
