#include <stdio.h>

int main() {
    
    int i = 2, n, pred, aktual;

    scanf_s("%d", &n);
    if (n > 0) {
        scanf_s("%d", &pred);

        if (pred < 0 || pred > 10) {
            printf("Postupnost nie je spravna\n");
        }
        for (i = 2; i <= n; i++) {
            scanf_s("%d", &aktual);
            if (aktual < pred / 2 || aktual > 2 * pred) {
                printf("Postupnost nie je spravna\n");
                break;
            }
            pred = aktual;
        }
    }
    if (i == n + 1) {
        printf("Postupnost je spravna\n");
    }
    
    return 0;
}