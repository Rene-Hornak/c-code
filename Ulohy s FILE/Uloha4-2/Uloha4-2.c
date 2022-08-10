#include <stdio.h>

int main() {
	
	/*Zapisanie neznamych a pridanie hodnot + vypsanie neznamych (s, v) a overenie ci s je neparne*/
	int s, v, i, j;
	int p = 0;
	int left = 0;
	int right = 0;
	 printf("Napis sirku 's' a vysku 'v': ");
	 scanf_s("%d %d", &s, &v);
    while (s % 2 == 0) {
		scanf_s("%d", &s);
	}
     printf("Sirka %d, Vyska %d\n", s, v);
	 
	 /*Neznama left a right pre boky pyramidy*/
	 left += s / 2 + 1;
	 right += s / 2 + 1;

	 /*char pyramid a jej znaky*/
	 char pyramid[36] = {'1','2','3','4','5','6','7','8','9','0',
		 'A','B','C','D','E','F','G','H','I','J','K','L','M','N',
		 'O','P','Q','R','S','T','U','V','W','X','Y','Z' };

	 /*vykreslenie pyramidy*/
	for (j = 1; j <= v; j++) {
		for (i = 1; i <= s; i++) {
			if (i <= left && i >= right)
				printf("%c", pyramid[p]);
			else
				putchar('*');
		}
		putchar('\n');
		left++;
		right--;
		p++;
	}

	return 0;
}