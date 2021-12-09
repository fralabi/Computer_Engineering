//  Author: Francesco La Barbera
//  Date: 08/12/2021
//

#include <stdio.h>

int main() {

    int secret, key;

    printf("Inserisci il numero da indovinare: ");
    scanf("%d", &secret);

    for (int i=0; i<10; i++) {

        printf("Indovina il numero: ");
        scanf("%d", &key);

        if (key == secret) {
            printf("INDOVINATO!!\n\n");
            printf("RIEPILOGO\n");
            printf("Tentativi effettuati: %d\n", i+1);
            printf("Tentativi rimasti: %d\n", 10-(i+1));
            break;
        }
        else if (key > secret) {
            printf("Valore troppo grande\n\n");
        }
        else {
            printf("Valore troppo piccolo\n\n");
        }
    }

    return 0;
}