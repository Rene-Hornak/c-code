#include <stdio.h>

int delitele(int x[], int pocetx, int y[], int k) {
	for (int i = 0;i < pocetx;i++) {
		if (k % x[i] == 0) {
			y[i] = x[i];
		}
	}
	return 0;
}

int main() {
	int x[] = { 4, 7, 10, 2, 3, 9, 6, 5, 8, 12 };
	int y[32];
	int pocetx, pocety, k;

	printf("Napis delitela: ");
	scanf_s("%d",&k);

	pocetx = sizeof(x) / sizeof(int);
	printf("Velkost x je: %d\n", pocetx);

	pocety = delitele(x, pocetx, y, k);

	for (int j = 0;j < pocetx;j++) {
		printf("Delitele su: %d\n", y[j]);
	}
	return 0;
}