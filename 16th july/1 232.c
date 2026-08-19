/*
Write the program to print the following pattern.
             1
          2 3 2
       3 4 5 4 3
   4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
/*/

#include<stdio.h>
int main()
{
    int a,i,j,k,l,f=0,m=1,x=1;
    scanf("%d",&a);
      for (i=1;i<=a;i++)
      {
          for(k=a-i;k>=1;k--)
            printf(" ");
          for(j=1;j<=i;j++)
          {

              printf("%d",x);
              x++;
          }

          for(l=f;l>=i;l--)
          {
              printf("%d",l);
          }
                f+=2;
          m++;


          x=x-(i-1);
          printf("\n");

      }

}
