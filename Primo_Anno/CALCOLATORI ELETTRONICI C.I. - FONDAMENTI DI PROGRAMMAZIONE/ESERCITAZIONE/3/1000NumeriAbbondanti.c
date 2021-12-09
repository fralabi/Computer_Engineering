//  Author: Francesco La Barbera
//  Date: 08/12/2021
//
#include <stdio.h>

int main() {

    int n=12, sum=1, z=1, odd=0;

    while (z < 1000) {

        for (int i=2; i<n; i++) {
            if (n%i == 0) {
                sum += i;
            }
        }

        if (sum > n) {
            printf("%d ", n);
            z++;
            if (n%2 == 1) {
                odd++;
            }
        }

        sum = 1;
        n++;
    }

    printf("\nNumeri dispari stampati: %d\n", odd);
}

