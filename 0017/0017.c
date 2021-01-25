#include<stdio.h>
void wrong_swap(int a, int b);//Function --> Call by value
void correct_swap(int *a, int *b);
int main()
{
    int a=3,b=4;
    printf("The value of a=%d and the value of b=%d\n",a,b);
    wrong_swap(a,b);
    printf("The value of a=%d and the value of b=%d\n",a,b);//Here no change will be observed
    correct_swap(&a,&b);//Here, we are defining the address of variables so that their values can be changed
    printf("The value of a=%d and the value of b=%d\n",a,b);//Here, swapping will occur
    return 0;
}

void wrong_swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void correct_swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
/*It is a function of the type "Call by reference". Here, we use address of variables. Therefore, we can change the change the value of variables.*/