#include<stdio.h>
#include<math.h>
int main(){
int a,i,count=0,b,value,total=0,rem;
printf("Enter the num :");
scanf("%d",&a);
b=a;
while(b>0){
    b/=10;
    count++;
}
for(i=0;i<count;i++)
{
    rem=a%10;
    value=rem*pow(2,i);
    total=total+value;
    a/=10;

}
printf("%d",total);
}
