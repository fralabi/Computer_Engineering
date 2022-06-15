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
[main.c](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20FONDAMENTI%20DI%20PROGRAMMAZIONE/ESERCITAZIONE/ESAMI/main.c)
```
Implementare in C la funzione int *function_01(int rows, int cols, int mat[][cols], int *min_of_max)
che, data la matrice mat di rows righe e cols colonne, restituisca l’array max_of_rows in cui l’elemento
di posizione i rappresenta il valore massimo della riga i-esima della matrice mat. Inoltre, restituire il
valore minimo di max_of_rows in min_of_max.

                                            | 3   8   5   2   1 |
                                            | 5   1   7   3   4 |
                                            | 3   1   9   7   2 |
                                            | 2   1   4   5   3 |
```
[main2.c](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20FONDAMENTI%20DI%20PROGRAMMAZIONE/ESERCITAZIONE/ESAMI/main2.c)
```
Un’Università ha necessità di un software per la gestione delle carriere accademiche degli studenti iscritti.
Ogni studente, che può essere iscritto ad un corso di Laurea Triennale, Magistrale o a Ciclo Unico, è
identificato univocamente da un identificativo, da un anno di immatricolazione, dall’identificativo del
Corso di Laurea e dagli esami sostenuti, con i relativi voti. Si supponga che ogni esame sostenuto sia
identificato soltanto dal codice insegnamento.
Definire un’opportuna struct student_t per descrivere uno studente, valutando quale tipo di dato
utilizzare per ogni attributo, e implementare le seguenti funzioni in linguaggio C:

    (a) *retval* student_max_avg(student_t *students, size_t size) che, ricevuto un array di stu-
    denti students di dimensione size, restituisca l’identificativo dello studente con la media dei voti più alta.

    (b) int student_sum_of_exams(student_t *students, size_t size) che, ricevuto un array di stu-
    denti students di dimensione size, restituisca il numero totale di esami sostenuti fra tutti gli stu-
    denti iscritti ad un corso di Laurea Magistrale. Implementare la funzione adottando un approccio ricorsivo.
```
[ESAME 14-06-2022](https://github.com/fralabi/Computer_Engineering/blob/main/Primo_Anno/CALCOLATORI%20ELETTRONICI%20C.I.%20-%20FONDAMENTI%20DI%20PROGRAMMAZIONE/ESERCITAZIONE/ESAMI/esame14_06_2022.c)
```
QUESITO 1
Implementare in C la funzione int f(int rows, int cols, int mat[][cols], int *avg) che, data
la matrice mat di rows righe e cols colonne, stampi a schermo la matrice visualizzando, al posto di ogni
elemento pari, un carattere "*" e restituisca il numero di elementi pari presenti nella matrice. Inoltre,
restituire la media degli elementi pari della matrice in avg.
Esempio: considerando la matrice
            | 1 2 3 |
            | 4 5 6 |
            | 7 8 9 |
La funzione stamperà a schermo:
            | 1 * 3 |
            | * 5 * |
            | 7 * 9 |
e valorizzerà avg con 5 poichè (2 + 4 + 6 + 8)/4 = 5

QUESITO 2

Una Banca ha necessità di un software per la gestione dei conti correnti dei propri clienti.
Ogni cliente è identificato da un id e dalle informazioni sul proprio conto corrente. Il conto corrente deve
includere le informazioni sul saldo e, in caso di debito nei confronti della banca, l’importo del debito.
Definire un’opportuna struct client_t per descrivere un cliente, valutando quale tipo di dato utilizzare
per ogni attributo, e implementare le seguenti funzioni in linguaggio C:

    (a) *retval* client_max(client_t *clients, size_t size) che, ricevuto un array di clienti clients
    di dimensione size, restituisca l’identificativo del cliente con l’importo più alto del saldo.

    (b) int clients_debits(client_tt *clients, size_t size) che, ricevuto un array di clienti clients
    di dimensione size, restituisca la somma di tutti i debiti dei clienti nei confronti della banca.
    Implementare la funzione adottando un approccio ricorsivo.

```
