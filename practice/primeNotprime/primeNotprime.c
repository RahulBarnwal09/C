//The concept we will use here is that prime numbers have only 2 factors i.e. 1 and itself. If any number has factors more than 2 then it is not a prime number.
#include<stdio.h>
int main()
{
    int a,b=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            b++;
        }
    }
    if(b==2)
    {
        printf("The number is prime\n");
    }
    else
    {
        printf("Not prime\n");
    }


    return 0;

}