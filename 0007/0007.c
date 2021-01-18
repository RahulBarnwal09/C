#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    while (a<10) //This check the condition till when the value of a<10
    {
        printf("%d\n",a);
        a++; //This will increase the value of a by 1
    }
    return 0;

}