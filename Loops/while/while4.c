// Write a table of n

#include <stdio.h>
int main()
{
    int i = 1, table, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= 10)
    {
        table = n * i;
        printf("%d * %d = %d\n", n, i, table);
        i++;
    }
    return 0;
}
