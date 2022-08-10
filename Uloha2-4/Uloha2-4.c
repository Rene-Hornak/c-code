#include <stdio.h>

int main() {

	float r;
	int n;

	printf("Napis realne cislo: ");
	scanf_s("%f", &r);

	n = (int)r;
	printf("Obycajne pretypovanie: %d\n", n);

	printf("Matematicke pretypovanie: %.0f\n", r);

	return 0;
}