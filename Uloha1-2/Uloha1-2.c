#include <stdio.h>
#include <math.h> 
/*pridanie kniznice math.h*/

int main() {

	double bmi = 0; /*zapisanie neznamich*/
	float m;
	float v;

	printf("Zadaj svoju hmotnost: "); /*vpisanie do neznamich*/
	scanf_s("%f", &m);
	printf("Zadaj svoju vysku: ");
	scanf_s("%f", &v);

	bmi = m / pow(v, 2);/*vzrec na vypocet bmi*/
	printf("Tvoje BMI je %lf\n", bmi);/*vypisanie bmi*/

	/*zistenie ci je bmi normalne, podvyziva alebo nadvaha*/
	if ((bmi >= 19) && (bmi <= 25)) {
		printf("Normalna hmotnost\n");
	}
	else if (bmi<19) {
		printf("podvyziva\n");
	}
	else if (bmi>25) {
		printf("nadvaha\n");
	}

	return 0;
}