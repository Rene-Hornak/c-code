#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int poleLow1[26] = {0}, poleUp1[26] = {0}, poleUp2[26] = {0}, poleLow2[26] = {0};
    int c, count = 1;
    FILE *subor;
    if ((subor = fopen("subor.txt", "r")) == NULL)
        printf("Subor sa nepodarilo otvorit.\n");

    while ((c = getc(subor)) != EOF){
        if (c == 10) count++;
        if (count == 1){
            if (c > 64 && c < 91)
                poleUp1[c - 65] += 1;
            if (c > 96 && c < 123)
                poleLow1[c - 97] += 1;
        }
        if (count == 2){
            if (c > 64 && c < 91)
                poleUp2[c - 65] += 1;
            if (c > 96 && c < 123)
                poleLow2[c - 97] += 1;
        }      
    }

    for (int i = 0; i < 26; i++){
        poleLow1[i] += poleUp1[i];
    }
    for (int i = 0; i < 26; i++){
        poleLow2[i] += poleUp2[i];
    }
    printf(" A B C D E F G H I J K L M N O P Q R S T U V W X Y Z \n");
    
    for (int i = 0; i < 26; i++){
        printf(" %d", poleLow1[i]);
        if (i == 25) printf("\n");
    }
    for (int i = 0; i < 26; i++){
        printf(" %d", poleLow2[i]);
        if (i == 25) printf("\n");
    }
    fclose(subor);
    return 0;
}