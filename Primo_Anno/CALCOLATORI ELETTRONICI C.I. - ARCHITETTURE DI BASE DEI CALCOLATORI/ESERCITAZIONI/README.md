#### BIT_0_SUM
```
    Scrivere in assembly ARM 32 una subroutine richiamabile da C che restituisca la somma dei bit a 0 
    dei valori contenuti in un array di int passato come argomento. Includere nella risposta anche un esempio d'uso in C.
```
[ES-01.c](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20ARCHITETTURE%20DI%20BASE%20DEI%20CALCOLATORI/ESERCITAZIONI/ES-01.c)<br>
[ES-01.s](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20ARCHITETTURE%20DI%20BASE%20DEI%20CALCOLATORI/ESERCITAZIONI/ES-01.s)<br>
[ES-01_2.s](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20ARCHITETTURE%20DI%20BASE%20DEI%20CALCOLATORI/ESERCITAZIONI/ES-01_2.s)<br><br>

#### MAX_INDEX
```
    Scrivere in assembly ARM 32 una subroutine richiamabile da C che restituisca l'indice
    del primo elemento con valore massimo di un array di int passato come argomento. 
    Includere nella risposta anche un esempio d'uso in C

    ESEMPIO D'USO
    $ ./max_index

    Input array:
    -1
    3
    4
    4
    max index: 2, max value: 4
```
[ES-02.c](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20ARCHITETTURE%20DI%20BASE%20DEI%20CALCOLATORI/ESERCITAZIONI/ES-02.c)<br>
[ES-02.s](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20ARCHITETTURE%20DI%20BASE%20DEI%20CALCOLATORI/ESERCITAZIONI/ES-02.s)<br><br>

#### THRESHOLD
```
    Scrivere in assembly ARM 32 una subroutine richiamabile in C che azzeri i valori
    del generico array di int passato come argomento di valore inferiore 0. 
    La funzione deve restituire il numero di elementi modificati. 
    Includere nella risposta anche un esempio d'uso in C.

    ESEMPIO D'USO (con soglia pari a 5):

    $ ./threshold

    INPUT 
    -1
    -3
    5
    8

    OUTPUT
    0
    0
    5
    8

    Changed values: 2
```
[ES-03.c](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20ARCHITETTURE%20DI%20BASE%20DEI%20CALCOLATORI/ESERCITAZIONI/ES-03.c)<br>
[ES-03.s](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20ARCHITETTURE%20DI%20BASE%20DEI%20CALCOLATORI/ESERCITAZIONI/ES-03.s)<br><br>

#### RETURN_NEG_AND_SUBSTITUTE
```
    Scrivere in assembly ARM 32 una subroutine richiamabile da C che restituisca il numero 
    di valori negativi contenuti in un array di int, di lunghezza non predeterminata, 
    passato come argomento e li sostituisca con un valore passato come ulteriore argomento. 
    Includere nella risposta anche un esempio d'uso in C.
```
[ES-04.c](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20ARCHITETTURE%20DI%20BASE%20DEI%20CALCOLATORI/ESERCITAZIONI/ES-04.c)<br>
[ES-04.s](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20ARCHITETTURE%20DI%20BASE%20DEI%20CALCOLATORI/ESERCITAZIONI/ES-04.s)<br><br>

#### DIVIDE_BY_FOUR
```
    Scrivere in assembly ARM 32 una subroutine richiamabile da C che modifichi un array 
    di unsigned int passato come argomento dividendo ciascun valore per 4 (array[i]=array[i]/4;). 
    Includere nella risposta anche un esempio d'uso in C.
```
[ES-05.c](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20ARCHITETTURE%20DI%20BASE%20DEI%20CALCOLATORI/ESERCITAZIONI/ES-05.c)<br>
[ES-05.s](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20ARCHITETTURE%20DI%20BASE%20DEI%20CALCOLATORI/ESERCITAZIONI/ES-05.s)<br><br>

#### INCREMENT_ARRAY
```
    Scrivere in assembly ARM 32 una subroutine richiamabile da C che modifichi un array di 
    unsigned int passato come argomento sommando a ciascun elemento il valore della 
    rispettiva posizione più uno (array[i]+=(i+1);). 
    Includere nella risposta anche un esempio d'uso in C.
```
[ES-06.c](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20ARCHITETTURE%20DI%20BASE%20DEI%20CALCOLATORI/ESERCITAZIONI/ES-06.c)<br>
[ES-06.s](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20ARCHITETTURE%20DI%20BASE%20DEI%20CALCOLATORI/ESERCITAZIONI/ES-06.s)<br><br>

#### GREATHER_THAN_FIFTHEEN
```
    Scrivere in assembly ARM 32 una subroutine richiamabile da C che restituisca il numero 
    di valori maggiori di 15 contenuti in un array di int passato come argomento. 
    Includere nella risposta anche un esempio d'uso in C.
```
[ES-07.c](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20ARCHITETTURE%20DI%20BASE%20DEI%20CALCOLATORI/ESERCITAZIONI/ES-07.c)<br>
[ES-07.s](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20ARCHITETTURE%20DI%20BASE%20DEI%20CALCOLATORI/ESERCITAZIONI/ES-07.s)<br><br>

#### ODD_NUMBER
```
    Scrivere in assembly arm 32 una subroutine richiamabile da C che restituisca il numero di 
    valori dispari contenuti in un array di int passato come argomento. 
    Includere nella risposta anche un esempio d'uso in C.
```
[ES-08.c](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20ARCHITETTURE%20DI%20BASE%20DEI%20CALCOLATORI/ESERCITAZIONI/ES-08.c)<br>
[ES-08.s](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20ARCHITETTURE%20DI%20BASE%20DEI%20CALCOLATORI/ESERCITAZIONI/ES-08.s)<br><br>

#### DIVIDE_BY_16_AND_SUBSTITUTE
```
    Scrivere in assembly ARM 32 una subroutine richiamabile in C che modifichi un array 
    di unsigned int passato come argomento sostituendo a ciascun valore il resto della 
    sua divisione per 16. La subroutine deve restituire il numero dei valori modificati. 
    Includere nella risposta anche un esempio d'uso in C.
```
[ES-09.c](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20ARCHITETTURE%20DI%20BASE%20DEI%20CALCOLATORI/ESERCITAZIONI/ES-09.c)<br>
[ES-09.s](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20ARCHITETTURE%20DI%20BASE%20DEI%20CALCOLATORI/ESERCITAZIONI/ES-09.s)<br><br>
