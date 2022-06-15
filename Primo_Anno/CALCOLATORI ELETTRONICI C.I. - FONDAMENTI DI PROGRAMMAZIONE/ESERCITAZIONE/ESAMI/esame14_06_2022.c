/*
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

*/

int f(int rows, int cols, int mat[][cols], int *avg) {

    int pari=0; 
    int sum=0;

    for (size_t i=0; i<rows; ++i) {

        for(size_t j=0; j<cols, ++j) {

            if (mat[i][j]%2==0) {
                printf("*");
                pari++;
                sum += mat[i][j];
            }
            else {
                printf("%d", mat[i][j]);
            }
        }
    }

    printf("\n");
    avg=sum/pari;

    return pari
}


/*
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

*/

struct client_t {
    int id;
    float saldo;
    float debito;
};

float client_max(client_t *clients, size_t size) {
    int max_saldo = clients[0].debito;
    int max_id = clients[0].id;

    for(size_t i=1; i<size; ++i) {
        if (clients[i].saldo > max_saldo) {
            max_saldo = clients[i].saldo;
            max_id = clients[i].id;
        }
    }

    return max_id;
}

float clients_debits(client_t *clients, size_t size) {

    if (size == 0) {
        return 0;
    }
    else {
        return clients[size-1].debito + clients_debits(clients, size-1);
    }
}
