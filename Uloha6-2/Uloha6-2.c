#include <stdio.h>

int nasobky(int x[], int pocetx, int y[], int k) {
	for (int i = 0;i < pocetx;i++) {
		if (x[i] % k == 0)
			y[i] = x[i];
	}
	return 0;
}

int main() {

	int x[] = { 4,7,10,1,3,9,2,5,8,6 };
	int y[16];
	int pocetx, pocety, k;

	printf("Napiste nasobok: ");
	scanf_s("%d",&k);

	pocetx = sizeof(x) / sizeof(int);
	printf("Velkost pola x je: %d\n", pocetx);

	pocety = nasobky(x, pocetx, y, k);

	for (int j = 0;j < pocetx;j++) {
		printf("Nasobky su: %d\n", y[j]);
	}
	return 0;
}