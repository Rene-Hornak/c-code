#include <stdio.h>

int main() {
    
    float palec;
    float vzdialenost;
    double pi = 3.14;
    float c;
    float d;
    double otocky;

    printf("Zadajte priemer kolesa v palcoch: ");
    scanf_s("%f", &palec);

    c = pi * palec;
    d = c * 2.54 / 100000;

    printf("Zadajte vzdialensot v km: ");
    scanf_s("%f", &vzdialenost);

    otocky = vzdialenost / d;
    printf("Koleso sa na ceste otoci %lf krat", otocky);

    return 0;
}