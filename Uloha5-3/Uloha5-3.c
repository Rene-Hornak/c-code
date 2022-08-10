#include <stdio.h>

/*funkcia na vypocet binarnej sustavy z desatienj sustavy*/
int binar(int a) {
	int j, i = 1;
	int save[32];
	/*while az po nulu, delenie dvojkou so zvyskom a ukladanie hodnoty do save*/
	 while (a != 0) {
		 save[i++] = a % 2;
		 a /= 2;
	 }	
	 /*vysledok je v zlom poradi, na inverziu pouzijeme j-- a prikaz for*/
	 printf("Cislo je v binarnej susteve: ");
	 for (j = i - 1; j > 0; j--) {
		 printf("%d", save[j]);
	 }
	 return 0;
}
int main() {
   /*premene a datove typy hlavnej funkcie*/
	int d, vysledok;
    /*vypisanie cisla*/
	printf("Vpis cislo v desatinej sustave: ");
	scanf_s("%d", &d);
	/*vysledok na vypocitanie v druhej funkcii binar*/
	vysledok = binar(d);

   return 0;
}