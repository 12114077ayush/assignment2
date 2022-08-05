#include<stdio.h>
int main()
{
int a,b,t;
scanf("%d %d",&a,&b);
t=a;
a=b;
b=t;
printf("swaped values are %d and %d",a,b);
return 0;
}
