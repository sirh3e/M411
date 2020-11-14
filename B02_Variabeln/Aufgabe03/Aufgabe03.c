// Author: Simon Schaufelberger

#include <stdio.h>
#include <stdlib.h>

typedef double f64;

#define STR(var) #var

int main() 
{
	f64 Celsius = 0.0;

	printf("%s: ", STR(Celsius));
	scanf("%lf", &Celsius);

	printf("%s = %lf\n", STR(Celsisus), Celsius);
	
	system("pause"); //Only works on windows
	return 0;
}
