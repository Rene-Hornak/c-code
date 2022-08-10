#include <stdio.h>

int main() {
	
    /*Nacitanie neznamych + otovrenie suboru vstup*/
    FILE* fp1, * fp2;
    char c;
    int u = 0;
    fp2 = fopen("vystup.txt", "w");
    if ((fp1 = fopen("vstup.txt", "r")) == NULL) {
        printf("Could not open file");
        return 0;
    }

    /*Bude vkladat subor vstup do suboru vystup az kym neojde na koniec suboru*/
    do {
        c = fgetc(fp1);
            fputc(c, fp2);
    } while (c != EOF);

    fclose(fp1);
    fclose(fp2);

	return 0;
}