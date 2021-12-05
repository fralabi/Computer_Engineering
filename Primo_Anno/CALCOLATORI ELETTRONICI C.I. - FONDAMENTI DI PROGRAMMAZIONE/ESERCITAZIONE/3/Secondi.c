//  Author: Francesco La Barbera
//  Date: 04/12/2021
//
//  Scrivere un programma in C che chieda all’utente di inserire un valore (int) che verrà interpretato come
//  “numero di secondi”. Scomporre tale valore in termini di ore, minuti e secondi.
//  (suggerimento: usare operatore %)
//
//  Esempio:
//      L’utente inserisce il valore 124
//      Il programma stamperà a schermo:
//      Numero di ore: 0
//      Numero di minuti: 2
//      Numero di secondi: 4

#include <stdio.h>

int main() {

    int seconds;
    printf("Inserisci il valore in secondi:  ");
    scanf("%d",&seconds);

    printf("Numero di ore: %d\n", seconds/3600);
    seconds %= 3600;
    printf("Numero di minuti: %d\n", seconds/60);
    seconds %= 60;
    printf("Numero di secondi: %d\n", seconds);

    return 0;
}