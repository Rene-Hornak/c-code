#include <stdio.h>

int parne(int x[], int pocetx, int y[]) {
	for (int i = 0;i < pocetx;i++) {
		if (x[i] % 2 == 0) {
			y[i] = x[i];
			printf("Pole1 ma: %d\n", y[i]);
		}
		else {
			continue;
			printf("Pole2 ma: %d\n", y[i]);
		}
	
	}
	return 0;
}

int main() {

	int x[] = { 4,7,1,3,2,5,6 };
	int pocetx;
	int y[16];

	pocetx = sizeof(x) / sizeof(int);
	printf("pocetx: %d\n", pocetx);

    parne(x, pocetx, y);

	for (int j = 0;j < pocetx;j++) {
		printf("Parne cisla su: %d\n", y[j]);
	}
	return 0;
}