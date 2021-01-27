#include<stdio.h>
void display(); //Funnction prototpe
void main()
{
    int a=1;
    printf("%d\n",a);
    display();//Function call
    printf("Function successfully executed\n");//When display function runs, main function sleeps, after execution main function returns(come back in action).
}

void display() //Function defination
{
    printf("This is Display function\n");
}