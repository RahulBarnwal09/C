#include<stdio.h>
int main()
{
    int n,m,c;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(m=1;m<=10;m++)
    {
        c=n*m;
        printf("%d * %d = %d\n",n,m,c);
    }
    int x,y,z;
    printf("Enter the number: ");
    scanf("%d",&x);
    for(y=10;y;y--)
    {
        z=x*y;
        printf("%d * %d = %d\n",x,y,z);
    }
    return 0;
}