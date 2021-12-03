// Author: Francesco La Barbera
//	Date 19/11/2021
// 	Scrivere un programma in C che, fatti inserire due valori (int) all'utente ne calcoli somma e prodotto	
//	Esempio
//		L'utente inserisce i valori 10 e 4
//		Il programma stamperà a schermo
//		10 + 4 = 14
//		10 * 4 = 40	

#include <stdio.h>

int main(void) {

    int A, B;

    printf("Inserisci A: ");
    scanf("%d",&A);
    printf("Inserisci B: ");
    scanf("%d",&B);

    printf("%d + %d = %d\n",A,B,A+B);
    printf("%d * %d = %d\n",A,B,A*B);

    return 0;
}
