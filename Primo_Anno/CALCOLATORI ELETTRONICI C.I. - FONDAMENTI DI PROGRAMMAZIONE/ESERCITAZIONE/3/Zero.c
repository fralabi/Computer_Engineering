//  Author: Francesco La Barbera
//  Date: 08/12/2021
//
#include <stdio.h>

int main() {

    int n, maximum, enteredValues=1;
    float sum=0;

    printf("Inserisci un valore: ");
    scanf("%d", &n);
    printf("\n");
    maximum=n;

    while (n != 0) {
        printf("[0]     Per fermarti\n");
        printf("[>0]    Per continuare\n");

        scanf("%d", &n);
        printf("\n");
        enteredValues++;
        sum+=n;

        if (n>maximum) {
            maximum=n;
        }
    }

    printf("Numeri inseriti: %d\n", enteredValues);
    printf("Valore massimo: %d\n", maximum);
    printf("Media: %.2f\n", (sum/enteredValues));
    return 0;

}