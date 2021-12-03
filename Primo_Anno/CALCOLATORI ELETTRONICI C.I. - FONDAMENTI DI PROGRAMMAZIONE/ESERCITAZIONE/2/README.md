# Esercitazione 2

### [Somma.c](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20FONDAMENTI%20DI%20PROGRAMMAZIONE/ESERCITAZIONE/2/Somma.c)
Scrivere un programma in C che, fatti inserire due valori (int) all’utente, ne calcoli somma e prodotto:
```
Esempio:
  L’utente inserisce i valori 10 e 4
  Il programma stamperà a schermo:
  10 + 4 = 14
  10 x 4 = 40
```
### [Rettangolo.c](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20FONDAMENTI%20DI%20PROGRAMMAZIONE/ESERCITAZIONE/2/Rettangolo.c)
Scrivere un programma in C che permetta all’utente di inserire due valori (float) che verranno
interpretati come le dimensioni (base e altezza) di un rettangolo. Calcolare perimetro e area del rettangolo
e visualizzare i risultati con 3 cifre dopo la virgola.
```
Esempio:
  L’utente inserisce i valori 7.5 10
  Il programma stamperà a schermo:
  Perimetro: 35.000
  Area: 75.000
```
### [Sizeof.c](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20FONDAMENTI%20DI%20PROGRAMMAZIONE/ESERCITAZIONE/2/SizeOf.c)
Scrivere un programma che, tramite l’operatore sizeof calcoli le dimensioni dei tipi
```
● unsigned char
● unsigned short int
● unsigned int
● unsigned long int
● unsigned long long int.
```
Memorizzare tali valori in delle variabili e, sulla base di questi, stampare a schermo il valore massimo
rappresentabile per ogni tipo. <br>
(suggerimento: includere file math.h ed utilizzare la funzione pow(base, exp). Compilare con gcc nomeFile -lm )
```
Esempio:
Size char: 1 (val max: 255)
Size short int: 2 (val max: 65535)
Size int: 4 (val max: 4294967295)
Size long int: 8 (val max: 18446744073709551616)
Size long long int: 8 (val max: 18446744073709551616)
```
###  [NumeroGiorni.c](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20FONDAMENTI%20DI%20PROGRAMMAZIONE/ESERCITAZIONE/2/NumeroGiorni.c)
Scrivere un programma in C che chieda all’utente di inserire un valore (int) che verrà interpretato come
“numero di giorni”. Scomporre tale valore in termini di anni, settimane e giorni.
```
Esempio:
  L’utente inserisce il valore 368
  Il programma stamperà a schermo:
  Numero di anni: 1
  Numero di settimane: 0
  Numero di giorni: 3
  (Infatti 368 giorni formano 1 anno (365 giorni) e 3 giorni)
```
### [MaxValueof3.c](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20FONDAMENTI%20DI%20PROGRAMMAZIONE/ESERCITAZIONE/2/MaxValueof3.c)
Scrivere un programma in C che chieda all’utente di inserire 3 valori (int).
Calcolare il massimo fra i 3 valori.

### [Incompleto.c](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20FONDAMENTI%20DI%20PROGRAMMAZIONE/ESERCITAZIONE/2/Incompleto.c)
Dato il seguente codice incompleto:
```
#include <stdio.h>
int main(void){

  int v1 = 5, v2 = 8;
  
  if(espressione) {
    printf("OK\n");
  }
  
  return 0;
}
```
definire espressione in modo che produca valore VERO se, e solo se:
```
● v1 e v2 positivi;
● v1 compreso fra 10 e 30;
● v2 strettamente maggiore di v1;
● v2 minore di 50;
```
### [Incompleto2.c](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20FONDAMENTI%20DI%20PROGRAMMAZIONE/ESERCITAZIONE/2/Incompleto2.c)
Dato il seguente codice incompleto:
```
#include <stdio.h>
int main(void){

  int v1 = 15, v2 = 42, v3 = 40, v4 = 50, v5 = 17;
  
  if(espressione) {
    printf("OK\n");
  }
  
  return 0;
}
```
definire espressione in modo che produca valore VERO se, e solo se:
```
● v1, v2, v3, v4 positivi;
● v2 compreso v3 e v4;
● v1 uguale a v5 oppure uguale a v5 - 2;
● v2 maggiore di 2*v1
● la differenza tra v2 e v1 è maggiore di v5;
```
### [AscendingOrder.c](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20FONDAMENTI%20DI%20PROGRAMMAZIONE/ESERCITAZIONE/2/AscendingOrder.c)
Scrivere un programma in C che chieda all’utente di inserire 3 valori (int) e li stampi in ordine crescente.
```
Esempio:
  L’utente inserisce i valori 10 4 3
  Il programma stamperà a schermo:
  3 4 10
```
