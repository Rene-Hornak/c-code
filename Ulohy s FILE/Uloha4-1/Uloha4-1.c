#include <stdio.h>

int main() {

	/*Zapisanie neznamych a vypisanie neznamej w*/
	int w, i, j;
	printf("Vypis cislo: ");
	scanf_s("%d",&w);

	/*Overenie ci je w neparne cislo*/
	while ((w % 2) == 0) {
		printf("Vypis cislo: ");
		scanf_s("%d", &w);
	}

	/*Vypisanie plusoveho znaku podla neznamej w*/
	for (j = 1; j <= w; j++) {
		for (i = 1; i <= w; i++) {
			if ((j == w / 2 + 1) || (i == w / 2 + 1))
				putchar('*');
			else
				putchar(' ');
		}
		putchar('\n');
	}

	return 0;
}