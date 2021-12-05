//  Author: Francesco La Barbera
//  Date: 05/12/2021
//
//  Scrivere, dopo averne disegnato il diagramma di flusso, un programma in C che chieda all’utente di
//  inserire un valore n (int) e stampi a schermo tutti i divisori di n.
//
//  Esempio:
//      L’utente inserisce il valore 42
//      Il programma stamperà a schermo:
//      I divisori di 42 sono: 2 3 6 7 14 21

#include <stdio.h>
#include <math.h>

int main() {

    int n;
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    printf("I divisori di %d sono: ", n);

    if (n%2 != 0) {
        for (int i=1; i<=sqrt(n); i=i+2) {
            if (n%i == 0) {
                printf("%d ", i);
            }
        }
    }
    else {
        for (int i=1; i<=n/2; i++) {
            if (n%i == 0) {
                printf("%d ", i);
            }
        }
    }

    printf("\n");

    return 0;
}