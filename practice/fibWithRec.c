#include<stdio.h>
int fib(int a);
int main()
{
    int b;
    b=fib(3);
    printf("%d\n",b);
    return 0;

}
int fib(int a)
{
    if(a==0)
    {
        return 0;
    }
    else if(a==1)
    {
        return 1;
    }
    else
    {
        return(fib(a-1)+fib(a-2));
    }
}