//  Author: Francesco La Barbera
//  Date: 03/12/2021
//
//  Scrivere un programma in C che chieda all’utente di inserire un valore ( int ) che verrà interpretato come
//  “numero di giorni”. Scomporre tale valore in termini di anni, settimane e giorni.
//
//  Esempio:
//      L’utente inserisce il valore 368
//      Il programma stamperà a schermo:
//      Numero di anni: 1
//      Numero di settimane: 0
//      Numero di giorni: 3
//      (Infatti 368 giorni formano 1 anno (365 giorni) e 3 giorni)

#include <stdio.h>

int main() {

    int days;
    printf("Inserisci il numero di giorni:  ");
    scanf("%d",&days);

    printf("Numero di anni: %d\n", days/365);
    days %= 365;
    printf("Numero di settimane: %d\n", days/7);
    days %= 7;
    printf("Numero di giorni: %d\n", days);

    return 0;
}