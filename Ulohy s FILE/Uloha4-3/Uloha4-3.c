#include <stdio.h>

int main() {
	
    /*Zapisanie neznamych + otovrenie suboru a overenie ci je otvoreny*/
    FILE* fp;
    int x, g = 0;
    char c;
    char a[6] = {'a','e','i','o','u','y'};
    if ((fp = fopen("file.txt", "r")) == NULL) {
        printf("Subor sa neda otvorit");
        return 0;
    }
    /*Cyklus na hladanie pismen*/
    for (x = 0;x < 6;x++) {
        g = 0;
        do {
            c = fgetc(fp);
            if (c == a[x]) {
                g += 1;
            }
        } while (c != EOF);
        printf("Subor ma %d krat %c\n", g, a[x]);
        rewind(fp);
    }
    fclose(fp);
	return 0;
}