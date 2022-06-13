#include <stdio.h>
#include <stdlib.h>

#define M MAGISTRALE
#define T TRIENNALE
#define U CICLO_UNICO

//#enum LAUREA{M,T,U};

struct student_t {
    //enum LAUREA laurea;
    int laurea;         // 0 = M, 1 = T, 2 = U
    int id;
    int anno;

    int *materie_sostenute;
    int *voti;
    int numero_esami;
};

/*
struct esame {
    char materia[20];
    int voto;
};
*/

int student_max_avg(struct student_t *students, size_t size);
int student_sum_of_exams(struct student_t *students, size_t size);
double student_media(int arr[], size_t size);

int main() {
    int s1_exams[] = {1,2,3};
    int s1_votes[] = {25,23,24};
    int s2_exams[] = {1,2,3,4};
    int s2_votes[] = {23,34,30,21};
    int s3_exams[] = {1,5};
    int s3_votes[] = {23,24};

    struct student_t s1 = {0, 283544, 2021, s1_exams, s1_votes, 3};
	struct student_t s2 = {0, 283633, 2022, s2_exams, s2_votes, 4};
    struct student_t s3 = {1, 223534, 2020, s3_exams, s3_votes, 2};
	struct student_t students[3] = {s1, s2, s3};

    printf("Lo studente con la media maggiore hai ID: %d \n\n", student_max_avg(students,3));
	
    int sum = student_sum_of_exams(students, 3);
	printf("La somma degli esami sostenuti dagli studenti della Laurea Magistrale sono: %d\n", sum);
}

int student_max_avg(struct student_t *students, size_t size) {

    int max_media = student_media(students[0].voti, students[0].numero_esami);
    int id = students[0].id;
    int temp_media;

    for(size_t i=1; i<size; i++) {
        temp_media = student_media(students[i].voti, students[i].numero_esami);
        if(temp_media > max_media) {
            max_media = temp_media;
            id = students[i].id;
        }
    }
    return id;
}

int student_sum_of_exams(struct student_t *students, size_t size) {


    int esami=0;

    if (size == 0) {
        return 0;
    }
    else {
        if (students[size-1].laurea == 0) {   // 0 = M, 1 = T, 2 = U
                esami += student_sum_of_exams(students,size-1) + students[size-1].numero_esami;
                return esami;
        }
        else {
            esami += student_sum_of_exams(students,size-1); 
            return esami;
        }
    }
}

double student_media(int array[], size_t size) {
    double tot=0;
    size_t i;
    for(i=0; i<size; ++i) {
        tot += array[i];
    }
    return tot/size;
}
