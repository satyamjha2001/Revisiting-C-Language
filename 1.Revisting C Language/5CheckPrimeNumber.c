#include <stdio.h>
int prime(int);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(prime(a))
    printf("%d is a prime number",a);
    else
    printf("%d is not a prime number",a);
    return 0;
}
int prime(int a)
{
    int i;
    if(a<=1)
    return 0;
    else if((a==2) || (a==3))
    return 1;
    else if(a%2==0 || a%3==0)
    return 0;
    else
    {
        for(i=5;i*i<=a;i+=6)
        {
            if((a%i==0) || (a%(i+2)==0))
            return 0;
            else
            return 1;
        }
    }

}