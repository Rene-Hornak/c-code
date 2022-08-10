#include <stdio.h>

void vynasob(int* x, int* y, int* z) {
	printf("Zadaj 2. cislo:");
	scanf_s("%u", &*y);
	*z = *x * *y;
}

void vysledok(int* j, int* k, int* l) {
	printf("Vysledok je: %u", *l);
}

int main() {
	
	int a, b, s;
	int* pa, * pb, * ps;
	printf("Zadaj 1. cislo:");
	scanf_s("%d",&a);

	pa = &a;
	pb = &b;
	ps = &s;

	vynasob(pa, pb, ps);
	vysledok(pa, pb, ps);

	return 0;
}