
#include<stdio.h>
int main()
{
    int a[20],b[50],i,n,e,j,k,temp=1,small,big=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;

    for(i=0;i<n;i++)
    {  small=0;

         for(k=0;k<i;k++)
            {
                if(a[k]==a[i])
                {   small=1;
                    break;
            }}
        if(small==1)
            continue;
        for(j=i+1;j<n;j++)
        {




                if(a[i]==a[j])
                    temp++;


    }
      if(temp>big)
      {big=temp;
      e=a[i];
      }
      temp=1;


}
  printf("%d occurs %d times \n",e,big);
}

