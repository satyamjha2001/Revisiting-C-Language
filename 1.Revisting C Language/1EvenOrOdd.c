#include<stdio.h>
int main() {
int n;
printf("Enter a number: ");
scanf("%d",&n);
if((n&1)==0)
printf("%d is even number",n);
else
printf("%d is odd number",n);
return 0;
}