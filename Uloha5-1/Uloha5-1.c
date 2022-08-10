#include <stdio.h>

/*fukcia na vypocet koeficientu*/
int vypocet(int Tseq, int Tpar) {
	return Tseq / Tpar;
}

int main() {
	/*zadeklarovanie premenych a datovych typov*/
	int a, b;
	float s = 0;

	/*vypisanie premenych v konzole*/
	printf("Vypis cisla Tseq a Tpar v ms: ");
	scanf_s("%d %d", &a, &b);

	/*vypocitanie koeficientu pomocou pridanej funkcie vypocet*/
	s = vypocet(a, b);

	/*vypisanie vysledku*/
	printf("Koeficient s sa rovna %.1f", s);

	return 0;
}