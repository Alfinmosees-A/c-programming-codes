#include<stdio.h>
int main()
{
    int a,i,j;
    char chr;
    scanf("%d",&a);

    for (i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {  chr=96;
            printf("%c",chr+j);



        }
        printf("\n");
    }

}
