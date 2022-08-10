#include <stdio.h>

/*funkcia na sucet so zadanimi ukazovatelmi*/
void sucet(int *x,int *y,int *z) {
	*z = *x + *y;
}

int main() {
	/*zadanie premenych a datovych typov a ukazovatelov*/
	int a, b, s;
	int* pa, * pb, * ps;
	/*vpisanie hodnot do a b*/
	printf("Zadaj dve cisla oddelene medzerou: ");
	scanf_s("%d %d", &a, &b);
	/*pridanie ukazovatelovi adresu*/
	pa = &a;
	pb = &b;
	ps = &s;
	/*privolanie funkcie sucet()*/
	sucet(pa, pb, ps);
	/*vypisanie*/
	printf("Sucet cisel je: %d", s);

	return 0;
}