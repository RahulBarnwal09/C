#include<stdio.h>
int main()
{
    int a,b,fact=1;
    printf("Enter the number: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;

    }
    printf("Factorial of the given number is = %d\n",fact);
    return 0;

}