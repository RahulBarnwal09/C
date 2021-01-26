#include<stdio.h>
int area(int a);
int main()
{
    int b;
    b=area(4);
    printf("The area of sqaure is %d\n",b);
    return 0;
}
int area(int a)
{
    int c;
    c=a*a;
    return c;
}