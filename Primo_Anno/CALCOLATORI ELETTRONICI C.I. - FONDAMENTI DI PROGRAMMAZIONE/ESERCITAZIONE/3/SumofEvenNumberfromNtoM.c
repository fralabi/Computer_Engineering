//  Author: Francesco La Barbera
//  Date: 05/12/2021
//
//  Scrivere, dopo averne disegnato il diagramma di flusso, un programma in C che chieda all’utente di
//  inserire due valori (int), n1 ed n2 .
//  Calcolare la somma dei soli valori pari compresi fra n1 ed n2 (inclusi).
//
//  Esempio:
//      L’utente inserisce i valori 6 e 10
//      Il programma stamperà a schermo:
//      La somma numeri compresi fra 6 e 10 è: 24
//      (poiché 6 + 8 + 10 = 24)

#include <stdio.h>

int main() {

    int n, m;
    printf("Inserisci il valore di inizio: ");
    scanf("%d", &n);
    printf("\nInserisci il valore di fine: ");
    scanf("%d", &m);

    //Aggiungere controllo che in numeri siano in ordine crescente oppure scambiarli e metterli in ordine

    printf("\nLa somma dei numeri compresi tra %d e %d è: ", n, m);

    if (n%2 == 0 && m%2==0) {
        printf("%d\n", ( (n + m) / 2) * ( ( (m - n) / 2) + 1 ) );
    }
    else if(n%2==0 && m%2 != 0) {
        printf("%d\n", ( (n + (m - 1) ) / 2) * ( ( ( (m - 1) - n ) / 2) + 1) );
    }
    else if (n%2 != 0 && m%2 == 0) {
        printf("%d\n", ( ( (n + 1) + m) / 2 ) * ( ( (m - (n + 1) ) / 2 ) + 1 ) );
    } 
    else {
        printf("%d\n", ( ( (n + 1) + (m - 1) ) / 2 ) * ( ( (m - n) / 2 ) ) );
    }

    return 0;
}