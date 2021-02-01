#include<stdio.h>
int main()
{
    int marks[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter the marks of student %d: ",i+1);
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i <5; i++)
    {
        printf("The marks of Student %d is %d\n",i+1,marks[i]);
    }
//Each value in array generally takes 4 bytes(for integer data type), 1 byte (for char data type) etc. but it varies compiler to compiler.
//Suppose the address of 1st element in array is 6204 then address for next element will be "Old Address + size of the data type".
//eg:- if "1" and "2" are 2 elements of an array then if address of "1" is 6204 then address for "2" will be 6204+4=6208

}