#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter a number: ");
scanf("%d",&a); //&a --> Address of a,  %d--> Format specifier
printf("Enter second number: ");
scanf("%d",&b);
c=a+b;
printf("The sum is %d\n",c);
}