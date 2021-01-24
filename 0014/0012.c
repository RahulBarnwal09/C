#include<stdio.h>
int main()
{
    int a=3;
    printf("%d %d %d\n",a,++a,a++);
    return 0;
}
/*Here, the expected answer will be 3 4 4 but the answer will be 5 5 3
*This is because:-
i) It changes from compiler to compiler
ii)In GCC the evaluation will be from right to left so first a=3 then it will increase to 4 then to 5 and then it will print
Note: In clang compiler the answer can be found is 3 4 4 */