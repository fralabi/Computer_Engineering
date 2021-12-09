#include <stdio.h>


int menu() {
    int n;
    printf("Indica la prossima operazione che intendi effettuare: \n");
    printf("1. Somma 2. Prodotto 3. Differenza 4. Divisione 0. Esci\n");
    scanf("%d", &n);
    return n;
}

void somma(float n1, float n2) {
    printf("%.0f + %.0f = %.0f\n\n",n1, n2, n1+n2);
}
void differenza(float n1, float n2) {
    printf("%.0f - %.0f = %.0f\n\n",n1, n2, n1-n2);
}
void prodotto(float n1, float n2) {
    printf("%.0f * %.0f = %.0f\n\n",n1, n2, n1*n2);
}
void divisione(float n1, float n2) {
    printf("%.0f / %.0f = %.2f\n\n",n1, n2, n1/n2);
}

int main() {

    int answer=5;
    float n1, n2;

    while (answer != 0) {

        answer=menu();

        if (answer==0) {
            printf("\nProgramma Terminato\n");
            break;
        }

        printf("Inserisci gli operandi: \n");
        scanf("%f %f", &n1, &n2);

        printf("\n");


        switch (answer)
        {
        case 1:
            somma(n1, n2);
            break;
        
        case 3:
            differenza(n1, n2);
            break;

        case 2:
            prodotto(n1, n2);
            break;

        case 4:
            divisione(n1, n2);
            break;
        
        }
    }

    return 0;
}
