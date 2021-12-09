//  Author: Francesco La Barbera
//  Date: 08/12/2021
//
#include <stdio.h>

int main() {
  int i,N,primo,secondo,terzo;

  printf("Quanti numeri della successione vuoi visualizzare? ");
  scanf("%d", &N);

  primo=1;
  secondo=1;

  printf("%d\n",primo);
  printf("%d\n",secondo);

  for(i=2;i<N;i++) {
      terzo=primo+secondo;
      primo=secondo;
      secondo=terzo;
      printf("%d\n",terzo);
  }
}