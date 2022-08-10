/*Program na vpisanie dvoch pismen a ziskanie ich ASCII cisla*/
#include <stdio.h>

int main()
{
    char p, o; /*zadanie neznamej char*/

    printf("Ahoj ASCII\n");

    printf("Napis dve pismena:"); /*vstup - vpisanie neznamej*/
    p = getchar();
    o = getchar();

    while (p < 97 || p > 122) {p = getchar();} /*kontrola ci su zadane hodnoty pismena*/
    while (o < 97 || o > 122) {o = getchar();}

    printf("%c %d\n", p - 32, p - 32); /*vystup - vypisanie velkych pismen a k nim ciselna hodnota*/
    printf("%c %d\n", o - 32, o - 32);

    return 0;
}