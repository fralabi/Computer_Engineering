//  Author: Francesco La Barbera
//  Date: 03/12/2021
//
//  Dato il seguente codice incompleto:
//
//      #include <stdio.h>
//
//      int main(void){
//          int v1 = 5, v2 = 8;
//          if(espressione) {
//              printf("OK\n");
//          }
//          return 0;
//      }
//
//  definire espressione in modo che produca valore VERO se, e solo se:
//      - v1 e v2 positivi;
//      - v1 compreso fra 10 e 30;
//      - v2 strettamente maggiore di v1;
//      - v2 minore di 50;

#include <stdio.h>

int main(void){

    int v1 = 15, v2 = 20;

    if((v1>0 && v2>0) && (v1>=9 && v1<=30) && (v2>v1) && (v2 < 50)) {
        printf("OK\n");
    }

    return 0;
}