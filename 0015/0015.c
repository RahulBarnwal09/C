#include<stdio.h>
int main()
{
    int i=8, *j,**k;//*j refers to a variable name that will store address of i, **k is used to store address of j and so on
    j=&i;//&i symbolises "Address of i"
    k=&j;
    printf("Address of i=%u\n",&i);//Prints address of i, %u is used for displaying address
    printf("Address of i=%u\n",j);//Prints address of i
    printf("Address of j=%u\n",&j);//Prints address of j
    printf("Value of i=%d\n",i);//Prints value of i
    printf("Value of i=%d\n",*(&i));//Prints value of i, *(&i)--> Symbolises "value at" i
    printf("Value of i=%d\n",*j);//Prints value of i
    return 0;

}