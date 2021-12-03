//  Author: Francesco La Barbera
//  Date: 03/12/2021
//
//  Scrivere un programma in C che chieda all’utente di inserire 3 valori ( int ) e li stampi in ordine crescente.
//
//  Esempio:
//      L’utente inserisce i valori 10 4 3
//      Il programma stamperà a schermo:
//      3 4 10

#include <stdio.h>

int main() {
    int n1, n2, n3, max;

    printf("Inserisci tre valori interi: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 < n2) {
        if (n1 < n3) {
            printf("%d",n1);
            if (n2 < n3) {
                printf("%d %d", n2, n3);
            }
            else {
                printf("%d %d", n3, n2);
            }
        }
        else {
            printf("%d %d %d", n3, n1, n2);
        }
    }
    else {
        if (n1 < n3) {
            printf("%d",n2);
            if (n1 < n3) {
                printf("%d %d", n1, n3);
            }
            else {
                printf("%d %d", n3, n1);
            }   
        }
        else {
            printf("%d %d %d", n2, n3, n1) ;
        }
    }
    printf("\n");

}