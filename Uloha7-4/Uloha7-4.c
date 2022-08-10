#include <stdio.h>

void prehod(int* x, int* y) {
	int h;
	h = *x;
	*x = *y;
	*y = h;
}

int main() {
   
	int a, b;
	int* pa, * pb;
	printf("Zadaj hodnoty premennych a, b: ");
	scanf_s("%d %d", &a, &b);

	pa = &a;
	pb = &b;

	prehod(pa,pb);

	printf("Hodnota a:%u , b:%u", *pa, *pb);

   return 0;
}