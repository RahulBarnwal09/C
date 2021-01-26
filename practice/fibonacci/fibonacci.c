#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    a=0;
    b=1;
    scanf("%d",&c);
    printf("%d\n%d\n",a,b);
    for(d=2;d<c;d++)
    {
        e=a+b;
        printf("%d\n",e);
        a=b;
        b=e;

    }
    return 0;


}