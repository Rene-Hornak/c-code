#include <stdio.h>

int main() {

	/* o1 je objem krvi v ¾avej srdcovej komore 
	   o2 je objem krvi v ¾avej srdcovej komore */
	float o1, o2; 
	float ef = 0;  /* ejekèná frakcia srdca */

	printf("Zadaj mnozstvo krvy v lavej komore: "); /*zadanie neznamim hodnotu*/
	scanf_s("%f", &o1);
	printf("Zadaj mnozstvo krvy v pravej komore: ");
	scanf_s("%f", &o2);

	ef = ((o1 - o2) / o1) * 100; /*zistenie ejekcnej frakcie srdca v %*/
	printf("Ejekcna frakcia srdca je %f\n",ef);

	if ((ef >= 55) && (ef <= 75)) {                  /*zistenie spravnej funkcie srdca*/
		printf("Srdce pacienta pracuje spravne\n");
	}
	else {
		printf("Srdce pacienta pracuje nespravne\n");
	}

	return 0;
}