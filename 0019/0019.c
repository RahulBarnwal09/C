#include<stdio.h>
int main()
{
    int a=56;
    int *ptr=&a;
    printf("The value of ptr is %u\n",ptr);
    ptr++;//This will increament the the address by 4 units i.e. equal to the size of each integer data type(Generally, Whatever data type is used) instead of "ptr+1".
    printf("The value of ptr is %u\n",ptr);
    return 0;
    //If "1" is at the address 6204 and "2" at 6208 and if "*ptr" points to the address of "1" then "ptr++" will point to "2".
}