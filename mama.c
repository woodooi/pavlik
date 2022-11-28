
#include<stdio.h>
#include<math.h>


void main(void)
{
	double x = 2.632;
	double y = 0.731;
	float z;
	z = sin(pow(x, 2)) + cos(2 * x + y) - 14 * pow((pow(x, 2) + y), 3);
	printf("sin(x^2)+cos(2x+y)-14(x^2+y)^3=%lf  \nx=%lf, \ny=%lf", z, x, y);
}