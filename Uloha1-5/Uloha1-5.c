#include <stdio.h>

int main() {
   
	int j[5] = { 1, 2, 4, 8, 16 };
	int n;

	printf("Zadaj mnozstvo jadier(1, 2, 4, 8, 16): ");
	scanf_s("%d",&n);

	for (int i = 0; i < 5; i++) {
		if (n == j[i]) {
				printf("Pocet jadier je %d\n", j[i]);
		}
	}

   return 0;
}