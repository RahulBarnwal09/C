#include<stdio.h>
int sum(int a, int b);
int main()
{
    int c;
    c=sum(2,5);//Here, 2 and 5 are arguments
    printf("The value of c is %d\n",c);
    return 0;
}

int sum(int a, int b)//int a and int b are called the parameters of the function
{
    int result;
    result=a*b;
    return result;//This is used for returning the value
}