//  Author: Francesco La Barbera
//  Date: 05/12/2021
//
//  Scrivere, dopo averne disegnato il diagramma di flusso, un programma in C che permetta all’utente di
//  inserire un numero arbitrario di numeri (int).
//  L’acquisizione dei dati termina quando l’utente inserisce due valori uguali di fila. Il programma deve
//  anche tenere traccia di quanti numeri sono stati inseriti.
//
//  Esempio:
//      L’utente inserisce i valori 4 2 6 2 5 2 6 4 3 3
//      Il programma stamperà a schermo:
//      Numeri inseriti: 10

#include <stdio.h>

int main() {

    int previous_number, number, counter=1;

    printf("Inserisci un numero: ");
    scanf("%d", &previous_number);
    while(1) {

        printf("\nInserisci un numero: ");
        scanf("%d", &number);
        if (previous_number == number) {
            break;
        }
        previous_number=number;

        counter++; 
    }

    printf("\nNumeri inseriti: %d\n",counter);

    return 0;
}