//  Author: Francesco La Barbera
//  Date: 08/12/2021
//
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int main() {

    int n;
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    for (int i=1; i<n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}