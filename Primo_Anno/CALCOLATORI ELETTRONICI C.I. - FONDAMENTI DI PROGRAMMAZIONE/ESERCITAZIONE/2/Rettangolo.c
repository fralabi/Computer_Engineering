// Author: Francesco La Barbera
//	Date 19/11/2021
//
//	Scrivere un programma in C che permetta all'utente di inserire due valori (float) che verranno
//	interpretati come le dimensioni (base e altezza) di un rettangolo. Calcolare perimero e area
//	del rettangolo e visualizzare i dati con 3 cifre dopo la virgola.
//
//	Esempio
//		L'utente inserisce i valori 7.5 10
// 		Il programma stamperà a schermo
//		Perimetro: 35.000
// 		Area: 75.000
    
#include <stdio.h>

int main(void) {

    float b,h;

    printf("Inserisci la base: ");
    scanf("%f",&b);

    printf("Inserisci l'altezza: ");
    scanf("%f",&h);

    printf("Il perimetro è %3.f\n", (h+b)*2);
    printf("L'area è %3.f\n", b*h);

    return 0;
}
