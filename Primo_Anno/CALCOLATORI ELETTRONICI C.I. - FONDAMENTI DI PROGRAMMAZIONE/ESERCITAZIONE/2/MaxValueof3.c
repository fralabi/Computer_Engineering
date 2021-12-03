//  Author: Francesco La Barbera
//  Date: 03/12/2021
//
//  Scrivere un programma in C che chieda all’utente di inserire 3 valori ( int ).
//  Calcolare il massimo fra i 3 valori.

#include <stdio.h>

int main() {

    int n1, n2, n3, max;

    printf("Inserisci tre valori interi: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("Il massimo è: ");

    if (n1 > n2) {
        if (n1 > n3) {
            printf("%d",n1);
        }
        else {
            printf("%d",n3);
        }
    }
    else {
        if (n2 > n3) {
            printf("%d",n2);
        }
        else {
            printf("%d",n3);
        }
    }
    printf("\n");
    
    return 0;   
}