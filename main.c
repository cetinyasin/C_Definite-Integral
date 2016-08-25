#include <stdio.h> 
#include <math.h>
 
int main()
{
	float result,a,b,f_a,f_b,f_avg; // f_a --> f(a) || f_b --> f(b) || f_avg --> f((a+b)/2)
	int degree;
 
 	printf("The equation and integral boundaries should be entered.");
 	printf("\nEnter the degree of the equation: "); scanf("%d",&degree);
	int coeffs[degree];	
	
	for(int i=degree;i>=0;i--)
	{
		printf("\nCoefficient of x^%d: ",i);
		scanf("%d",&coeffs[i]);
	}
	printf("\nEquation created. Give me the integral boundaries now.");
	printf("\nLower limit a: "); scanf("%f",&a);
	printf("\nUpper limit b: "); scanf("%f",&b);
	for(int i=degree;i>=0;i--)
	{
		f_a+=coeffs[i]*pow(a,i);
		f_b+=coeffs[i]*pow(b,i);
		f_avg+=coeffs[i]*pow((a+b)/2,i);
	}
	result=((b-a)/6)*(f_a+4*f_avg+f_b);
	printf("\nResult: %f", result);
}
