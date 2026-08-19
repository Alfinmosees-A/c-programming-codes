#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    int i,n,chr,k;
    scanf("%s",&st);
    scanf("%d",&k);
    n=strlen(st);

    for(i=0;i<n;i++)
    {
        chr=st[i];
        chr+=k;
        if(chr==90+k||chr==122+k){
            chr-=26;
        printf("%c",chr);

    }
    }





}
