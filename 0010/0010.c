#include<stdio.h>
int main()
{
    for(int a=0;a<10;a++)//for(initialise;condition;increament/decreament)
    {
        printf("The value of a is %d\n",a);
    }
    for(int i=5;i;i--)//This is also correct. This loop will run until the value of a is positive i.e. till i=1
    {
        printf("The value of i is %d\n",i);
    }
    //Program to print n natural numbers in reverse order
    int x;
    printf("Enter The Value: ");
    scanf("%d",&x);
    for(int i=x;i;i--)
    {
        printf("The value of x is %d\n",i);
    }

    return 0;
}