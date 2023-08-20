#include <stdio.h>
int lcm(int, int);
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("LCM of numbers is %d", lcm(a, b));
    return 0;
}
int lcm(int a, int b)
{
    int i;
    int max;
    for (i = a > b ? a : b; i <= (a * b); i += a > b ? a : b)
        if ((i % a == 0) && (i % b == 0))
            return i;
}