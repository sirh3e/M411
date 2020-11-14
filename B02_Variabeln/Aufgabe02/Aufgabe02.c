#include <stdio.h>
#include <stdlib.h>

typedef int i32;
typedef double f64;

#define STR(var) #var

int main() 
{
    i32 Wert = 0;
	if (Wert >= 0) {
		f64 Wert = 15.5;
		printf("%s = %lf\n", STR(Wert), Wert);
	}
	else {
		printf("Der Wert ist negativ!\n");
	}
	system("pause"); //Only works windows

	return 0;
}
