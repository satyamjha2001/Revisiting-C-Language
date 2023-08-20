#include<stdio.h>
int main() {
int a,b;
printf("Enter your first number: ");
scanf("%d",&a);
printf("Enter your second number: ");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("Your number after swap is %d and %d",a,b);
return 0;
}