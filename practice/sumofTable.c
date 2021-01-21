#include<stdio.h>
int main()
{
    int n,m,c,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(m=1;m<=10;m++)
    {
        c=n*m;
        sum=sum+c;
    }
    printf("The sum is %d\n",sum);

    return 0;
}