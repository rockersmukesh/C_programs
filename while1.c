// Print numbers from n to 1
#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n >= i)
    {
        printf("%d \n", n);
        n--;
    }
    return 0;
}
