//  Author: Francesco La Barbera
//  Date: 05/12/2021
//
//  Scrivere, dopo averne disegnato il diagramma di flusso, un programma in C che calcoli la somma dei
//  primi n numeri naturali (con n compreso). Il valore n (int) deve essere scelto dall’utente.
//
//  Esempio:
//      L’utente inserisce il valore 5
//      Il programma stamperà a schermo:
//      La somma dei primi 5 numeri è: 15
//      (poiché 1 + 2 + 3 + 4 + 5 = 15)

#include <stdio.h>

int main() {

    float n;
    printf("Inserisci un numero: "); 
    scanf("%f", &n);

    printf("\nLa somma dei numeri da 1 a %0.f è: %1.f\n", n, (n/2+0.5)*n);

    return 0;

}