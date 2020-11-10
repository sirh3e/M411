// Author: Simon Schaufelberger

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	double Celsius = 0.0;
	double Farenheit = 0.0;

	printf("Celsius: ");
	scanf_s("%lf", &Celsius);

	printf("Celsius = %lf\n", Celsius);
	
	system("pause");
	return 0;
}
