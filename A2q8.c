#include<stdio.h>
int main()
{ int a,b;
printf("enter a number");
scanf("%d",&a);
b=a&1;
if(b==1)
printf("number is odd");
if(b==0)
printf("number is even");
return 0;

}
