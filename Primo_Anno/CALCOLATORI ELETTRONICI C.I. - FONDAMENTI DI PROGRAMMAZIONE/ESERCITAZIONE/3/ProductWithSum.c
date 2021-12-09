//  Author: Francesco La Barbera
//  Date: 08/12/2021
//
#include <stdio.h>

int main() {

    int n1, n2, product=0;
    printf("Inserisci i valori che vuoi moltiplicare: ");
    scanf("%d %d", &n1, &n2);

    for (int i=0; i<n2; i++) {
        product+=n1;
    }

    printf("%d x %d = %d", n1, n2, product);

    return 0;
}