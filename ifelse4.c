// Check whether the number is even or odd

#include<stdio.h>
int main()
{
    int num;
    printf("Please enter a number:");
    scanf("%d", &num);
    if(num%2 == 0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
    return 0;
}
