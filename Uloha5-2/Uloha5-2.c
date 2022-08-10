#include <stdio.h>

float priemer(float a, float b) {
	return (a / (b / 100));
}

int main() {

	float km, l;
	float v = 0;

	printf("Napis vzdialenost v km a spotrebu v l: ");
	scanf_s("%f %f", &km, &l);

	v = priemer(l,km);

	printf("Priemerna spotreba (l/100km) je %.2f", v);

	return 0;
}