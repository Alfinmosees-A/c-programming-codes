#include<stdio.h>
int main()
{
    int i,j,a,k,l,c=0,x,y;
    scanf("%d",&a);

    int b[100][100];

    for(i=1;i<a;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1||j==i)
            {
                b[j-1]=1;
                 printf("hello");
            }
            else{
               b[j-1]=0;
            }
        }
        printf("\n");
    }

  for(i=0;i<a;i++)
  {
      printf("%d\n",b[i]);
  }

}
