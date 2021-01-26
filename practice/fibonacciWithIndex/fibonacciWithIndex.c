#include<stdio.h>
int main()
{
    int a,b,c,d,e,x=2,y;//Here, X has been initialised to 2 because first two index positions will be occupied by a and b i.e. 0 and 1st position. Then onwards next elements would be stored.
    a=0;
    b=1;
    scanf("%d",&c);
    int fib[c];//This is for creating array that as many number of elements that is equal to c
    printf("%d\n%d\n",a,b);
    for(d=2;d<c;d++)
    {
        e=a+b;
        fib[0]=a;//This is define 'a' at 0th position
        fib[1]=b;//This is define 'b' at 1st position
        fib[x]=e;//This will store all elements in e
        x++;//This will increase the value of x each time i.e. x=x+1
        printf("%d\n",e);//This will print fibonacci series
        a=b;
        b=e;

    }
    scanf("%d",&y);
    printf("%d",fib[y]);//This will be used to print the element corresponding to that index number mentioned


    return 0;


}