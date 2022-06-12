#include <stdio.h>
#include <stdlib.h>

struct book_t {
    int id;
    char autore[20];
    char editore[15];
    int anno_pubb;
    int num_pagine;
};

//Restituisce la somma del numero di pagine dei libri con anno di pubblicazione precedente a year.
int total_pages(struct book_t elenco[], int size, int year);
//Mostra a schermo le informazioni di tutti i libri contenuti in elenco adottando un approccio ricorsivo.
void recursive_print(struct book_t elenco[], int size);

int main() {
    struct book_t b1 = {1, "IO SONO", "L'HO FATTO IO", 2000, 324};
    struct book_t b2 = {2, "IO SONO 2", "L'HO FATTO IO 2", 2010, 392};
    struct book_t b3 = {3, "IO SONO 3", "L'HO FATTO IO 3", 2012, 311};

    struct book_t books[3] = {b1,b2,b3};

    int year = 2011;

    printf("Total page before %d are : %d \n\n", year, total_pages(books,3,year));

    recursive_print(books,3);
}

int total_pages(struct book_t elenco[], int size, int year) {

    int sum=0;

    for(size_t i=0; i<size; i++) {
        if (elenco[i].anno_pubb < year) {
            sum += elenco[i].num_pagine;
        }
        else {
            continue;
        }
    }
    return sum;
}

void book_print(struct book_t book) {
    printf("ID: %d \n", book.id);
    printf("AUTORE: %s \n", book.autore);
    printf("EDITORE: %s \n", book.editore);
    printf("ANNO: %d \n", book.anno_pubb);
    printf("PAGINE: %d \n\n", book.num_pagine);
}

void recursive_print(struct book_t elenco[], int size) {

    if (size==0) {
        return;
    }
    else {
        recursive_print(elenco, --size);
        book_print(elenco[size]);
        /*
        printf("ID: %d \n", elenco[size].id);
        printf("AUTORE: %s \n", elenco[size].autore);
        printf("EDITORE: %s \n", elenco[size].editore);
        printf("ANNO: %d \n", elenco[size].anno_pubb);
        printf("PAGINE: %d \n", elenco[size].num_pagine);
        */
    }
}
