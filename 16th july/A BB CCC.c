/* Write the program to print the following pattern.
A
B B
C C C
D D D D*/

#include<stdio.h>
int main()
{
    int a,i,j;
    char chr;
    scanf("%d",&a);

    for (i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {  chr=64;
            printf("%c",chr+i);



        }
        printf("\n");
    }

}
