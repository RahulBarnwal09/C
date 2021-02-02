#include<stdio.h>
void reverse(int *ptr, int n)
{   int temp;
    for(int i=0;i<(n/2);i++)//here we have taken the counter till n/2. otherwise the same array will be printed as the counter will go to middle element to reverse and then again it will move forward to re-reverse it. Thus giving same array
    {
        temp=ptr[i];
        ptr[i]=ptr[n-i-1];
        ptr[n-i-1]=temp;
    }
}
void main()
{
    int a[]={1,2,3,4,5,6,7};
    reverse(a, 7);
    for(int i=0;i<7;i++)
    {
        printf("%d\n",a[i]);
    }
}