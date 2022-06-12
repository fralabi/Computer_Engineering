[ES01.c](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20FONDAMENTI%20DI%20PROGRAMMAZIONE/ESERCITAZIONE/ESAMI/es01.c)
```
Definire ed implementare in C un algoritmo che, data una matrice quadrata di dimensione N, restituisca
1 se ogni riga della matrice contiene almeno un numero primo; altrimenti 0.

                                            | 12  13  14 |
                                            | 15  16  17 |
                                            | 18  19  20 |
```
[ES02.c](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20FONDAMENTI%20DI%20PROGRAMMAZIONE/ESERCITAZIONE/ESAMI/es02.c)
```
Una biblioteca ha bisogno di un software per la gestione dei libri. In particolare, ogni libro è descritto da
un id, un autore, un titolo, un editore, un anno di pubblicazione e un numero di pagine.
Definire un’opportuna struct book_t per descrivere un libro e implementare le seguenti funzioni in
linguaggio C:

    (a) int total_pages(struct book_t elenco[], int size, int year); restituisce la somma del
    numero di pagine dei libri con anno di pubblicazione precedente a year.

    (b) void recursive_print(struct book_t elenco[], int size); mostra a schermo le informazio-
    ni di tutti i libri contenuti in elenco adottando un approccio ricorsivo.
```
[ES03.c](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20FONDAMENTI%20DI%20PROGRAMMAZIONE/ESERCITAZIONE/ESAMI/es03.c)
```
Implementare in C la funzione int remove_primes(int rows, int cols, int mat[][cols]) che, da-
ta la matrice mat di rows righe e cols colonne, ponga a −1 tutti i numeri primi della matrice e restituisca
il numero di elementi che sono stati modificati.

                                            | 14  13  16 |
                                            | 12  18  17 |
                                            | 16  19  22 |
```
[ES04.c](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20FONDAMENTI%20DI%20PROGRAMMAZIONE/ESERCITAZIONE/ESAMI/es04.c)
```
Un’università ha necessità di un software per la gestione delle anagrafiche degli studenti.
Ogni studente è identificato da un identificativo numerico, da una matricola (che contiene lettere e
numeri), dalla data di nascita (codificata in anno, mese, giorno), dal numero di materie sostenute fino a
quel momento e dalla media dei voti degli insegnamenti superati.
Definire un’opportuna struct student_t per descrivere uno studente e implementare le seguenti funzioni
in linguaggio C:

    (a) int get_student_with_higher_average(struct student_t elenco[], int size) che, ricevuto 
    un array di studenti elenco di dimensione size, restituisca l’identificativo dello studente con la media più alta;

    (b) int recursive_check_id(struct student_t elenco[], int size, int id) che, ricevuto un
    array di studenti elenco di dimensione size, retituisca 1 se l’array contiene lo studente con
    identificativo id, 0 altrimenti. Implementare la funzione adottando un approccio ricorsivo.
```
