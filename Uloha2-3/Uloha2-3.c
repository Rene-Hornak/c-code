#include <stdio.h>

int main() {

	/*zadanie neznamych*/
	int m, n, i;
	float f = 1;

	/*vypisanie neznamej*/
	printf("Napis cislo: ");
	scanf_s("%d", &m);

	/*kontrola kladnej hodnoty*/
	while (m < 0) {
		scanf_s("%d", &m);
	}
	 
	/*pridanie rovnakeho cisla*/
	n = m;

	/*ziskanie faktoru z cisla a jeho vypisanie do konzole*/
	for (i = 1; i <= n; i++) {
		f = f * m;
		m--;
	}
	printf("Faktorial cisla je %f", f);

	return 0;
}