#include <stdio.h>

int main() {

	int n;/*zadanie neznamej*/

	printf("Napis cislo: ");/*zadanie cisla*/
	scanf_s("%d",&n);

	/*zistenie ci je parne alebo neparne*/
	if ((n % 2) == 0) {
		printf("Cislo je parne");
	}
	else {
		printf("Cislo je neparne");
	}

	return 0;
}