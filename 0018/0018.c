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
}