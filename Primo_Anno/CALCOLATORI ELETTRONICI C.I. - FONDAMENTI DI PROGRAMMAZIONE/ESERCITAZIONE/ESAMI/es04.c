#include <stdio.h>
#include <stdlib.h>

struct student_t {
    int id;
    char matricola[7];
    int anno_nasc;
    int mese_nasc;
    int giorno_nasc;
    int materie_sostenute;
    double media;
};

int get_student_with_higher_average(struct student_t elelnco[], int size);
int recursive_check_id(struct student_t elenco[], int size, int id);

int main() {

    struct student_t s1 = {1,"0789034", 2004, 3, 12, 4, 25.5};
    struct student_t s2 = {2,"0789035", 2004, 10, 1, 7, 22.5};
    struct student_t s3 = {3,"0789036", 2004, 4, 25, 10, 29};

    struct student_t students[3] = {s1,s2,s3};

    printf("The student with higher average has ID: %d \n\n", get_student_with_higher_average(students, 3));
    printf("%s \n\n", recursive_check_id(students,3,2)? "TROVATO" : "NON TROVATO");  //OPERATORE TERNARIO


}


int get_student_with_higher_average(struct student_t elenco[], int size) {

    int max_media = elenco[0].media;
    int id = elenco[0].id;

    for(size_t i=1; i<size; i++) {
        if(elenco[i].media > max_media) {
            max_media = elenco[i].media;
            id = elenco[i].id;
        }
    }

    return id;
}

int recursive_check_id(struct student_t elenco[], int size, int id) {   

    if (size==0) {
        return 0;
    }
    if (elenco[size].id == id) {
        return 1;
    }
    else {
        if (recursive_check_id(elenco,size-1, id) == 1) {
            return 1;
        }
        return 0;
    }
}
