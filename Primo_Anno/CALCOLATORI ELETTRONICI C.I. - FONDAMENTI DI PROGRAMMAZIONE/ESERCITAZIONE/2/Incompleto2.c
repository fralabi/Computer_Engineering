//  Author: Francesco La Barbera
//  Date: 03/12/2021
//
//  Dato il seguente codice incompleto:
//
//      #include <stdio.h>
//
//      int main(void){
//          int v1 = 15, v2 = 42, v3 = 40, v4 = 50, v5 = 17;
//              if(espressione) {
//                  printf("OK\n");
//              }
//          return 0;
//      }
//
//  definire espressione in modo che produca valore VERO se, e solo se:
//      - v1, v2, v3, v4 positivi;
//      - v2 compreso v3 e v4;
//      - v1 uguale a v5 oppure uguale a v5 - 2;
//      - v2 maggiore di 2*v1
//      - la differenza tra v2 e v1 è maggiore di v5;

#include <stdio.h>
int main(void){

    int v1 = 15, v2 = 42, v3 = 40, v4 = 50, v5 = 17;

    if((v1 > 0 && v2>0 && v3>0 && v4>0) && ((v3>=v2 && v4<=v2) || (v4>=v2 && v3<=v2)) && (v1 == v5 || v1 == v5-2) && (v2 > v1*2) && (v2-v1 > v5)) {
        printf("OK\n");
    }

    return 0;
}