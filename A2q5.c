#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("enter three digit number");
scanf("%d",&a);
b=a%10;
c=(a/10)%10;
d=(a/10)/10;
printf("sum of digits of entered number is %d",b+c+d);
return 0;
}
