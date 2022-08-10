#include <stdio.h>

int main() {
  
	int den, mesiac, rok;
	int den1, mesiac1, rok1;
	int narodenie;
	int dnesok;
	int vysledok;

	printf("Datum narodenia v tvare DD MM RRRR: ");
	 scanf_s("%d %d %d", &den, &mesiac, &rok);
      narodenie = (den * 1) + (mesiac * 30) + (rok * 365);

	printf("Dnesny datum v tvare DD MM RRRR: ");
	 scanf_s("%d %d %d", &den1, &mesiac1, &rok1);
	  dnesok = (den1 * 1) + (mesiac1 * 30) + (rok1 * 365);
	
	  vysledok = dnesok - narodenie;
	printf("Od narodenia uplynulo %d dni", vysledok);
	
  return 0;
}