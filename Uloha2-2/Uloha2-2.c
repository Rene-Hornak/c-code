#include <stdio.h>

int main() {

    /*zadanie neznamej char*/
    char a, b, c; 

    /*vypisanie neznamej char*/
    printf("Napis tri pismena: "); 
    a = getchar();
    b = getchar();
    c = getchar();

    /*kotrola ci je char velke alebo male pismeno*/
    while ((a < 97 || a > 122) && (a < 65 || a > 90)) { 
        a = getchar(); 
    } 
    while ((b < 97 || b > 122) && (b < 65 || b > 90)) {
        b = getchar(); 
    }
    while ((c < 97 || c > 122) && (c < 65 || c > 90)) {
        c = getchar(); 
    }

    /*zmena velkych pismen na male*/
    if ((a > 64) && (a < 91)) { 
        printf("%c", a + 32); 
    } else { 
        printf("%c", a);
    } 
    if ((b > 64) && (b < 91)) {
        printf("%c", b + 32); 
    } else {
        printf("%c", b); 
    }
    if ((c > 64) && (c < 91)) { 
        printf("%c", c + 32);
    } else {
        printf("%c", c); 
    }
    
    /*vypisanie pismen v alphabetickom poradi*/
         if ((a < b && a < c) && (b < c)) { 
             printf("%c %c %c", a, b, c); 
         }  
    else if ((b < a && b < c) && (a < c)) { 
             printf("%c %c %c", b, a, c); 
         }
    else if ((c < a && c < b) && (a < b)) { 
             printf("%c %c %c", c, a, b); 
         }
    else if ((a < c && a < b) && (c < b)) {
             printf("%c %c %c", a, c, b); 
         }
    else if ((b < c && b < a) && (c < a)) {
             printf("%c %c %c", b, c, a); 
         }
    else if ((c < b && c < a) && (b < a)) { 
             printf("%c %c %c", c, b, a); 
         }

    return 0;
}