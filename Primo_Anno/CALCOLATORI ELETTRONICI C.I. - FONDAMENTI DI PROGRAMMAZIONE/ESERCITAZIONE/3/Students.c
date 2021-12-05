//  Author: Francesco La Barbera
//  Date: 04/12/2021


#include <stdio.h>
#include <stdlib.h>

// typedef struct {
//     char iscrizione;
//     int numberOfExam;
//     float sumVoteExam;
// } Studente;

void menu() {
    printf("Cosa posso fare per te? \n");
    printf("    [1] Inserimento studente \n");
    printf("    [2] Stampa la media\n");
    printf("    [e] Esci dal programma\n");
    printf("    \n");
}

int main() {

    printf("Benvenuto, questo programma ti aiuterà a gestire le valutazioni degli studenti\n\n");

    long long int sumOfVoteExamUniversity=0;
    long long int sumOfNumberExamUniversity=0;

    long long int sumOfVoteExamTriennale=0;
    long long int sumOfNumberExamTriennale=0;

    long long int sumOfVoteExamMagistrale=0;
    long long int sumOfNumberExamMagistrale=0;

    //MEDIE
    float averageOfTriennale=0;     //La media delle medie dei voti degli studenti iscritti ad un corso di Laurea Triennale
    float averageOfMagistrale=0;    //La media delle medie dei voti degli studenti iscritti ad un corso di Laurea Magistrale
    float averageOfUniversity=0;    //La media delle medie di tutti gli studenti
    float TopAverageOfTriennale=0;  //La media più alta degli studenti Triennali;
    float TopAverageOfMagistrale=0; //La media più alta degli studenti Magistrali
    float TopAverageOfUniversity=0; //La media più alta fra tutti gli studenti

    int studentCounter=1;           //Contatore

    printf("Premi INVIO");

    while (1) {

        char exit;          //Variabile di uscita

        while (getchar() != '\n'); //BUFFER

        menu();
        scanf("%c", &exit);

        if (exit == '1') {

            int voteExam;       //Voto esame
            char iscrizione;
            int numberOfExam=0;
            int sumVoteExam=0;

            while (getchar() != '\n'); //BUFFER

            printf("Inserisci il %d° studente, dove è iscritto? \n", studentCounter);
            printf("    [T] Triennale\n");
            printf("    [M] Magistrale\n");
            scanf("%c", &iscrizione); 

            printf("Quanti esami ha sostenuto? \n");
            scanf("%d", &numberOfExam);

            for (int i=0; i<numberOfExam; i++) {

                printf("Che voto ha conseguito?\n");
                scanf("%d", &voteExam);

                sumVoteExam += voteExam;
            }

            sumOfVoteExamUniversity+=sumVoteExam;
            sumOfNumberExamUniversity+=numberOfExam;

            if (iscrizione == 'T') {

                sumOfVoteExamTriennale+=sumVoteExam;
                sumOfNumberExamTriennale+=numberOfExam;

                averageOfTriennale=sumOfVoteExamTriennale/sumOfNumberExamTriennale;

                    if (TopAverageOfTriennale < sumVoteExam/numberOfExam) {
                        TopAverageOfTriennale = sumVoteExam/numberOfExam;

                        if (TopAverageOfUniversity < TopAverageOfTriennale) {
                            TopAverageOfUniversity = TopAverageOfTriennale;
                        }

                    }
            }
            else {
                sumOfVoteExamMagistrale+=sumVoteExam;
                sumOfNumberExamMagistrale+=numberOfExam;

                averageOfMagistrale=sumOfVoteExamMagistrale/sumOfNumberExamMagistrale;

                    if (TopAverageOfMagistrale < sumVoteExam/numberOfExam) {
                        TopAverageOfMagistrale = sumVoteExam/numberOfExam;

                        if (TopAverageOfUniversity < TopAverageOfMagistrale) {
                            TopAverageOfUniversity = TopAverageOfMagistrale;
                        }
                    } 
            }

            averageOfUniversity=sumOfVoteExamUniversity/sumOfNumberExamUniversity;
            studentCounter++;
        }
        else if (exit == 'e') {
            break;
        }
        else {
            printf("Media dei voti della Triennale: %.2f\n",averageOfTriennale);
            printf("Media dei voti della Magistrale: %.2f\n",averageOfMagistrale);
            printf("Media dei voti dell'Università: %.2f\n",averageOfUniversity);
            printf("Media dei voti più alta della Triennale: %.2f\n",TopAverageOfTriennale);
            printf("Media dei voti più alta della Magistrale: %.2f\n",TopAverageOfMagistrale);
            printf("Media dei voti più alta dell'Università: %.2f\n",TopAverageOfUniversity); 
        }
    }

    printf("Alla prossima volta, spero abbia fatto un buon lavoro! \n");
}