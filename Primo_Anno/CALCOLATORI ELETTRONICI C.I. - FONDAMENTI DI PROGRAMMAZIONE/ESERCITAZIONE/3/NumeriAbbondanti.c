//  Author: Francesco La Barbera
//  Date: 08/12/2021
//
#include <stdio.h>

int main() {

    int n, sum=1;
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    for (int i=2; i<n; i++) {
        if (n%i == 0) {
            sum += i;
        }
    }

    if (sum > n) {
        printf("%d è un valore abbondante\n", n);
    }
    else {
        printf("%d non è un valore abbondante\n", n);
    }
}