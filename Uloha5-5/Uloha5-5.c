#include <stdio.h>

int pacient[12] = {12,5,42,86,59,42,51,12,1,34,75,12};

int priemer(int a) {
	/*vypocitanie priemeru*/
	int i, s = 0;
	for (i = 0; i < 12; i++) {
		s = s + pacient[i];
	}
	printf("Priemerny pocet pacientov je %d\n", s/12);
	return 0;
}

int najmenej(int b) {
	/*najdenie najmensieho cisla pocas roka*/
	int i,pozicia = 0;
	pozicia = pacient[0];
	for (i = 0;i < 12;i++) {
		if (pozicia > pacient[i]) {
			pozicia = pacient[i];
		}
	}
	printf("Najmensie cislo je %d\n", pozicia);
	return 0;
}

int najviac(int c) {
	/*najdenie najvacsieho cisla pocas roka*/
	int i, pozicia = 0;
	pozicia = pacient[0];
	for (i = 0;i < 12;i++) {
		if (pozicia < pacient[i]) {
			pozicia = pacient[i];
		}
	}
	printf("Najvacsie cislo je %d\n", pozicia);
	return 0;
}

int najmensikvartal(int d) {
	int a = 0, b = 0, c = 0, i;
	/*rozdeli rok na 3 kvartale*/
	for (i = 0;i <= 3;i++) {
		a = a + pacient[i];
	}
	for (i = 4;i <= 7;i++) {
		b = b + pacient[i];
	}
	for (i = 8;i <= 11;i++) {
		c = c + pacient[i];
	}

	int q[] = { a,b,c };
	/*zlucene kvartale v poli, pomocou for najdeme najmensiu z nich*/
	int j, pozicia = 0;
	pozicia = q[0];
	for (j = 0;j < 3;j++) {
		if (pozicia > q[j]) {
			pozicia = q[j];
		}
	}
	printf("Najmensi kvartal ma cislo %d\n", pozicia);

	return 0;
}

int najvacsikvartal(int e) {

	int a = 0, b = 0, c = 0, i;
	/*rozdeli rok na 3 kvartale*/
	for (i = 0;i <= 3;i++) {
		a = a + pacient[i];
	}
	for (i = 4;i <= 7;i++) {
		b = b + pacient[i];
	}
	for (i = 8;i <= 11;i++) {
		c = c + pacient[i];
	}
	
	int q[] = { a,b,c };
	/*zlucene kvartale v poli, pomocou for najdeme najvacsiu z nich*/
	int j, pozicia = 0;
	pozicia = q[0];
	for (j = 0;j < 3;j++) {
		if (pozicia < q[j]) {
			pozicia = q[j];
		}
	}
	printf("Najvacsi kvartal ma cislo %d\n", pozicia);

	return 0;
}

int main() {
    
	int i, p, s = 0;
	/*vypise globalnu premenu*/
	for (i = 0; i < 12; i++) {
		printf("Vypiste pacientov v %d. mesiaci %d\n", i+1, pacient[i]);
	}
	/*zapne funkcie*/
	p = priemer(s);
	p = najmenej(s);
	p = najviac(s);
	p = najmensikvartal(s);
	p = najvacsikvartal(s);

   return 0;
}