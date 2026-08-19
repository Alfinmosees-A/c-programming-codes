#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i,j,count=0,n,m;
    scanf("%s",&str1);
    scanf("%s",&str2);
    n=strlen(str1);
    m=strlen(str2);

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    {
        if(str2[i]==str1[j])
        {
            count++;
        }
    }

    }
    printf("%d",count);
}
