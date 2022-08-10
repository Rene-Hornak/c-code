#include <stdio.h>

int main() {
    
    float r;
    double pi = 3.14;
    double obvod, obsah, objem, povrch;

    printf("Zadaj polomer: ");
    scanf_s("%f", &r);

    obvod = 2 * pi * r;
    printf("Obvod kruznice = %lf \n", obvod);

    obsah = pi * r * r;
    printf("Obsah kruznice = %lf \n", obsah);

    objem = 4.0 / 3.0 * (pi * r * r * r);
    printf("Objem gule = %lf \n", objem);

    povrch = 4 * pi * r * r;
    printf("Povrch gule = %lf \n", povrch);

    return 0;
}