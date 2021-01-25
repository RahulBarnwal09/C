#include<stdio.h>
int sum(int a, int b);
int main()
{
    int a=3, b=7;
    printf("The value is %d\n",sum(a,b));
    return 0;
}
int sum(int a, int b)
{
    int c;
    c=a+b;
    a=1115;
    b=2525;
    return c;
}
/*
This is a function of the type "Call by Value"
i) Here whatever the value of a and b is defined within the function 'sum' it won't affect the value of a and b in main function as copy of a and b is passed.
ii) After execution it will display the sum =10 and the function 'sum' won't affect the value of a and b in the main function even after execution of 'printf' function.
iii) a will be 3 and b will be 7 only
*/
