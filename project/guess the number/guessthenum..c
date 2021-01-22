#include<stdio.h>
#include<time.h>//This has been included to use time function
#include<stdlib.h>//This has been included to use rand() function that can generate random numbers
int main()
{
int num,a,nguess=1;
srand(time(0));//This will give order to generate different random numbers every time. Time(0) specifies- run from the beginning of program
num=rand()%100 + 1;//This is to specify to store random numbers to num. rand()%100 + 1 will generate numbers from 1 to 100
do
{
    printf("Guess the number between 1 to 100: ");
    scanf("%d",&a);
    if(a>num)
    {
        printf("Lower the number please.\n");
    }
    else if(a<num)
    {
        printf("Higher number please\n.");
    }
    else
    {
        printf("You guessed it correct in %d attempts\n",nguess);
    }
    nguess++;
}
while(a!=num);
return 0;
}