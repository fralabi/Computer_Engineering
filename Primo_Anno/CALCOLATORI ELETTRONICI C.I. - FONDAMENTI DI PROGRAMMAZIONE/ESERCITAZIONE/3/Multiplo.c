//  Author: Francesco La Barbera
//  Date: 04/12/2021
//
//  Scrivere un programma in C che chieda all’utente di inserire 2 valori (int) e stabilisca se uno è multiplo
//  dell’altro (non importa in che ordine)
//
//  Esempio:
//      L’utente inserisce i valori 8 16
//      Il programma stamperà a schermo:
//      Uno è multiplo dell’altro
//      (in quanto 16 è multiplo di 8)

#include <stdio.h>

int main() {

    int n1, n2;
    printf("Inserisci due valori: \n");
    printf(" - ");
    scanf("%d", &n1);
    printf(" - ");
    scanf("%d", &n2);

    if (n1%n2 == 0 || n2%n1==0) {
        printf("Uno è multiplo dell'altro\n");
    }
    else {
        printf("Non sono multipli fra loro\n");
    }

    return 0;
}
