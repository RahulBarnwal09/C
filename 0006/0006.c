#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,g,h,i,j,sum,avg;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    scanf("%f",&e);
    scanf("%f",&f);
    scanf("%f",&g);
    scanf("%f",&h);
    scanf("%f",&i);
    scanf("%f",&j);
    sum = (a+b+c+d+e+f+g+h+i+j);
    avg = (a+b+c+d+e+f+g+h+i+j)/10;
    printf("%f\n",sum);
    printf("%f\n",avg);
    printf("%g\n",sum);
    printf("%g\n",avg);
    return 0;

}
/* Here %f will return float data type. If sum=55.5, it will display 55.5000000 or 0.0000000
But if we want to print in the form 55.5 or 0 we have to use "%g" instead of "%f" to get desired result. */