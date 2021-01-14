#include<stdio.h>
#include<math.h>
int main()
{
    int h=3^3; //There is not exponential in C.
    printf("%d\n",h);//This is bitwise XOR operator in C
    printf("%f\n",pow(3,2));
    return 0;                        //To use exponents we have to math library and use "pow" function--> pow(3,2) means 3^2
}                            //Power always returns float datatype instead of integer so use %f instead %d