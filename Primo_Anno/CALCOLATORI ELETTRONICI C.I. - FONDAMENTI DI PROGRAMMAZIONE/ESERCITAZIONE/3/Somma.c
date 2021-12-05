//  Author: Francesco La Barbera
//  Date: 05/12/2021
//
//  Scrivere, dopo averne disegnato il diagramma di flusso, un programma in C che calcoli la somma di n
//  elementi (int) fatti inserire dall’utente. Per far ciò, chiedere all’utente di inserire n (che rappresenta
//  quanti numeri intende inserire) ed iniziare l’acquisizione (stampando, di volta in volta, l’ultimo valore
//  inserito).

 #include <stdio.h>

int main() {

    int n, sum=0, number;
    printf("Inserisci quanti numeri vuoi sommare: ");
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        printf("\nInserisci il numero che vuoi sommare: ");
        scanf("%d", &number);
        printf("%d", number);
        sum += number;
        if (i != n-1) {
            if (i != n-2 ) {
                printf("\nMancano ancora %d valori", n-(i+1));            
            }
            else {
            printf("\nManca ancora l'ultimo numero");
            }
        }
    }

    printf("\nLa somma è: %d\n", sum);
}