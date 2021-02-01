#include<stdio.h>
void printArray(int *ptr, int n)//*ptr--> points to address of corresponding elements,  n-->Indicates number of elements in array
{
    for (int i=0;i<n;i++)
    {
        printf("The value of %d element is %d\n",i+1,ptr[i]);//Instead of ptr[i] we can write *(ptr+i)
    }

}
void main()
{
    int arr[7]={1,2,3,4,5,6,7};
    printArray(arr, 7);

}