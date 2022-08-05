#include<stdio.h>
int main()
{ int a,c;
printf("Enter a number");
scanf("%d",&a);
c=a/10;
if(c==0)
printf("entered digit is unit placed");
else
printf("number without last digit is %d",c);
return 0;
}
