// print cube of 1 to n

#include <stdio.h>
int main()
{
    int i = 1, n, cube;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n)
    {
        cube = i * i * i;
        printf("The cube of %d is %d\n", i, cube);
        i++;
    }
    return 0;
}
