//  Author: Francesco La Barbera
//  Date: 05/12/2021
//
//  Scrivere, dopo averne disegnato il diagramma di flusso, un programma in C che chieda all’utente di
//  inserire un valore n (int) e stabilisca se n è un numero primo.
//
//  N.B. Un numero si dice primo se è divisibile solo per 1 e per se stesso.

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int main() {

    int n;
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d è un numero primo \n", n);
    }
    else {
        printf("%d non è un numero primo \n", n);
    }
}