#include <stdio.h>

int main() {

    /*zapisanie neznamych + subory a ich kontrola*/
	FILE* cinitele, * vysledky;
	char c;
	int i, n1, n2, f, h;
    int q;
	float faktorial = 0.0;
	cinitele = fopen("cinitele.txt", "r");
	vysledky = fopen("vysledky.txt", "w");
	if (cinitele == NULL) {
		printf("Neda sa otvorit");
		return 0;
	}

    /*zistenie faktorialu*/
    do {
        q = 0;
        fscanf(cinitele, "%d %d", &n1, &n2);
        h = n1 * n2;
        f = h;
        for (i = (n1 * n2) - 1; i > 0; i--) {
            f = f * i;
            if (f > 50000000) {
                q = 1;
                
            }
        }
   /*vypisanie ci je vacsi alebo mensi ako 50 milionov*/
        if (q == 1) {
            fprintf(vysledky, "%d %d = %d, F: ### \n", n1, n2, h);
        }
        else {
            fprintf(vysledky, "%d %d = %d, F: %d \n", n1, n2, h, f);
        }
    } while (c = fgetc(cinitele) != EOF);

	fclose(cinitele);
	fclose(vysledky);

	return 0;
}