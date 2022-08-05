#include<stdio.h>
int main()
{ int a,b;
printf("enter a non negative number");
scanf("%d",&a);
b=a%10;
if(a<10)
printf("unit digit is %d",a);
if(a>=10)
{
printf("unit digit is %d",b);
}
}
