#include<stdio.h>
int main()
{
    int i=5,j=5,k=5,l=5;
    printf("The value of 'i' is %d\n",i++);//This will first print the value of 'i' = 5 and then will increase its value
    printf("The value of 'i' is %d\n",i);//Here, the increased value of 'i' which is =6 will be printed
    printf("The value of 'j' is %d\n",++j);//This will first increase the value of j then it will print
    printf("The value of 'j' is %d\n",j);//This will print increased value of j
    printf("The value of 'k' is %d\n",k--);//This will first print the value of k then it will decrease its value
    printf("The value of 'k' is %d\n",k);//This will print new value of k
    printf("The value of 'l' is %d\n",--l);//This will first decrease the value of l and then it will print
    printf("The value of 'l' is %d\n",l);//This will print the new value of l
    printf("The value of 'i' is %d\n",i+=10);//This means i=i+10
    return 0;

}