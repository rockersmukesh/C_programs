#include<stdio.h>
void main()
{
    int a,b,c,d,e,sum;
    float avg;
    printf("Enter C marks:");
    scanf("%d",&a);
    printf("Enter C++ marks:");
    scanf("%d",&b);
    printf("Enter Java marks:");
    scanf("%d",&c);
    printf("Enter Python marks:");
    scanf("%d",&d);
    printf("Enter HTML marks:");
    scanf("%d",&e);
    sum=a+b+c+d+e;
    avg=sum/5;
    printf("Sum of marks is %d\n",sum);
    printf("Average marks is %f",avg);
}