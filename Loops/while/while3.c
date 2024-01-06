//  Factorial of n number

#include <stdio.h>
int main()
{
    int i = 1, fact = 1, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n)
    {
        fact = fact * i;
        i++;
    }
    printf("The factorial of %d is %d", n, fact);
}
