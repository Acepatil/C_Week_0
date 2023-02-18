//Program to input a float or double upto 2 precision
#include<stdio.h>
int main()
{
    float a=551535.48979449;
    double b=165534.7486646;
    printf("%f %lf\n",a,b);//for normal 7 bit %f and %lf 15 bit number
    printf("%0.2f %0.2lf\n",a,b);//for precision upto 2 digits
    printf("%-10.2f %-10.2lf\n",a,b);//for precision upto 2 digits and 7 digits to left precision

}