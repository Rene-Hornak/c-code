#include <stdio.h>

int main() {
	
	double f;
	double c;

	printf("Zadajte pocet stupnov Fahrenheita: ");
	scanf_s("%lf", &f);

	c = (5.0 / 9.0) * (f - 32);

	printf("%lf Fahrenheita je %lf Celsius", f, c);

	return 0;
}