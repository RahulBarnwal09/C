#include<stdio.h>
int main()
{
  /*  for(int a=0;a<10;a++)
    {
        printf("The value of a is %d",a);
    }
    *The above code will print the value of "a" till a<10
    */
   for(int a=0;a<10;a++)
    {
        if(a==5)
        {
            break;//This will break/exit the loop as the value of "a"=5. So, it will print the value of a from 0 to 4
        }
        printf("The value of a is %d\n",a);
    }
    for(int i=0;i<10;i++)
    {
        if(i==5)
        {
            continue;//This will skip the current and move to next iteration. Thus, it will not print "5" and rest all numbers will be printed.
        }
        printf("The value of i is %d\n",i);
    }

}