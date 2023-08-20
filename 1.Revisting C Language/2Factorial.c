#include<stdio.h>
int main() {
int n,i,fact=1;
printf("Enter a number: ");
scanf("%d",&n);
for(i=n;i>1;i--)
{
    fact*=i;
}
printf("%d is the factorial of your number",fact);
return 0;
}