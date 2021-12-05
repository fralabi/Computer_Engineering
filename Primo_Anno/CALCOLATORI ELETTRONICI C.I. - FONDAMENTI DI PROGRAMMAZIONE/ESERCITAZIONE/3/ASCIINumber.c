//  Author: Francesco La Barbera
//  Date: 05/12/2021
//
//  Scrivere un programma in C che stampi a schermo il valore della codifica ASCII di tutti i caratteri
//  compresi fra a e z.
//
//  Esempio:
//      Il programma stamperà a schermo:
//      1. a = 97
//      2. b = 98

#include <stdio.h>

int main() {

    for (int i=97; i<(97+26); i++) {
        printf("%d. %c = %d \n",i-96,i,i);
    }

    return 0;
}
