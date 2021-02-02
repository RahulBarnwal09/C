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
    printf("Enter the position where to insert: ");
    scanf("%d",&c);
    printf("Enter the value to be inserted: ");
    scanf("%d",&d);
    for(int i=b-1;i>=c;i--)
    {
        a[i+1]=a[i];

    }
    a[c-1]=d;

    for(int i=0;i<=b;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

}