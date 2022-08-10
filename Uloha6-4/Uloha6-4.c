#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Zadaj velkost pola: ");
    scanf_s("%d", &n);
    char* pole = malloc(n * sizeof(int));

    printf("Zadaj do pola %d znakov: ", n);
    for (int i = 0; i < n; i++){
        scanf_s(" %c", &pole[i]);
    }

    printf("Pole od zadu je: ");
    for (int i = n - 1; i >= 0; i--){
        printf("%c", pole[i]);
    }
    free(pole);
    return 0;
}