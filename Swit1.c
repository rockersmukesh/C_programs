// create a simple calculator

#include <stdio.h>
int main()
{
    char operator;
    float n1, n2, result;

    printf("Please enter 2 number ");
    scanf("%f%f", &n1, &n2);

    printf("Please select operator +,-,*,/: ");

    getchar();
    scanf("%c", &operator);

    switch (operator)
    {
    case '+':
        result = n1 + n2;
        printf("%.2f", result);
        break;

    case '-':
        result = n1 - n2;
        printf("%.2f", result);
        break;
    case '*':
        result = n1 * n2;
        printf("%.2f", result);
        break;
    case '/':
        if (n2 == 0)
        {
            printf("Denominator cannot be 0\n");
        }
        else
        {
            result = n1 / n2;
            printf("%.2f", result);
        }
        break;

    default:
        printf("Please select from following range");
    }

    return 0;
}
