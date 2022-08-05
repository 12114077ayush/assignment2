#include<stdio.h>
int main()
{int x,b;
printf("enter a number ");
scanf("%d",&x);
b=x%10;
x=x-b;
printf("resulting number is %d",x);
return 0;
}
