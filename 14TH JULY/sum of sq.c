#include<stdio.h>
int main()
{int a,x,i,fi;
 scanf("%d",&a);
 for (i=1;;i++)
 {
     x=i*i;
     if(x<=a)
     {
         fi+=x;

     }
     else
        break;
 }
 printf("%d",fi);
}
