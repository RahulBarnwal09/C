#include<stdio.h>
void change(int a);
void main()
{
    int b=22;
    printf("Old value= %d\n",b);
    change(b);
    printf("New value= %d\n",b);//The value of b here also it will be 22 only because copy of 'b' will be passed here. If in 'change function' we would have used int b instead int a then also the value of b won't change.

}
void change(int a)
{
    a=77;
}