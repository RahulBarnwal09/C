#include<stdio.h>
void main()
{
    int a[100],b,c,d;
    printf("Enter the number of elements in array: ");
    scanf("%d",&b);
    printf("Enter the elements: ");
    for(int i=0;i<b;i++)
    {

        scanf("%d",&a[i]);
    }
    for(int i=0;i<b;i++)
    {
        printf("%d ",a[i]);
    }
    printf("Enter the position where to delete: ");
    scanf("%d",&c);
    if(c>b)
    {
        printf("Deletion not possible");
    }
    else
    {
        for(int i=c-1;i<b-1;i++)
        {
            a[i]=a[i+1];
        }
        for(int i=0;i<b-1;i++)
        {
            printf("%d ",a[i]);
        }
    }
}