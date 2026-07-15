#include<stdio.h>
int main()
{int a,i,b=0,c=0,n;
scanf("%d",&n);
while(n!=0){
    a=n%10;
    n/=10;
    b*=10;
    b+=a;

}
printf("%d",b);
}

