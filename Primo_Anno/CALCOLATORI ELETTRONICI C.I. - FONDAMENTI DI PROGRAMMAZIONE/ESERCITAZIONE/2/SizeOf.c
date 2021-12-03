// Author: Francesco La Barbera
//	Date 19/11/2021
//
//  Scrivere un programma in C che, tramite l'operatore sizeof calcoli le dimensioni dei tipi
//      - unsigned char
//      - unsigned short int
//      - unsigned int
//      - unsigneed long int
//      - unsigned long long int
//
//  Memorizzare tali valori in delle variabili e, sulla base di questi, stampare a schermo il valore massimo
//  rappresentabile per ogni tipo
//  (suggerimento: includere math.h ed utilizzare la funzione pow(base, exp). Compiare con gcc nomeFile -lm)
//
//  Esempio:
//      size char:              1(val max: 255)
//      size short int:         2(val max: 65535)
//      size int:               4(val max: 4294967295)
//      size long int:          8(val max: 18446744073709551616)
//      size long long int:     8(val max: 18446744073709551616)

#include <stdio.h>
#include <math.h>

int main(void){

    int size_c, size_si, size_i, size_l, size_ll;

    size_c = sizeof(unsigned char);
    size_si = sizeof(unsigned short int);
    size_i = sizeof(unsigned int);
    size_l = sizeof(unsigned long int);
    size_ll = sizeof(unsigned long long int);

    printf("size_c      =   %d (maxvalue = %.0f)\n",    size_c,     pow(2, 8*size_c)-1);
    printf("size_si     =   %d (maxvalue = %.0f)\n",    size_si,    pow(2, 8*size_si)-1);
    printf("size_i      =   %d (maxvalue = %.0f)\n",    size_i,     pow(2, 8*size_i)-1);
    printf("size_l      =   %d (maxvalue = %.0f)\n",    size_l,     pow(2, 8*size_l)-1);
    printf("size_ll     =   %d (maxvalue = %.0f)\n",    size_ll,    pow(2, 8*size_ll)-1);

    return 0;
}