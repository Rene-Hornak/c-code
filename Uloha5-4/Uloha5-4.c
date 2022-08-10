#include <stdio.h>
/*globalny datovy typ a premena*/
float stav;
/*funkcia na vlozenie sumy*/
float vlozenie(float vklad) {
	printf("Vlozte sumu: ");
	scanf_s("%f", &vklad);
	return stav = stav + vklad;
}
/*funkcia na vybratie sumy*/
float vyberanie(float vyber) {
	printf("Sumu ktoru chcete vybrat: ");
	scanf_s("%f", &vyber);
	return stav = stav - vyber;
}
/*hlavna funkcia*/
int main() {
	/*datovy typ float aj s premenou a hodnotou 0*/
	float a = 0;
	/*cyklus na volby a pri volbe 4 vypne program*/
	while (a != 4) {
		printf("Volba 1: Vlozenie sumy penazi na bankovy ucet.\n");
		printf("Volba 2: Vyber sumy penazi z bankoveho uctu.\n");
		printf("Volba 3: Zistenie stavu na bankovom ucte.\n");
		printf("Volba 4: Koniec cinnosti automatu.\n\n");

		printf("Vasa volba: ");
		scanf_s("%f", &a);

		/*podla volby, zadaneho cisla, nas prikaz hodi do danej funkcie a spravi pozadovanu operaciu*/
		if (a == 1) {
			stav = vlozenie(a);
		}
		else if (a == 2) {
			stav = vyberanie(a);
		}
		else if (a == 3) {
			printf("Na ucte mate %f penazi.\n", stav);
		}
	}
	
   return 0;
}