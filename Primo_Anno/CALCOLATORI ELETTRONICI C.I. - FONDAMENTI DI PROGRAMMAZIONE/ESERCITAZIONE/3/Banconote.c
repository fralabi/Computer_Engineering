//  Author: Francesco La Barbera
//  Date: 04/12/2021
//
//  Scrivere un programma in C che chieda all’utente di inserire un valore (int) che verrà interpretato come
//  “importo in €”. Scomporre tale valore nel numero minimo di banconote e monete (si considerino
//  soltanto banconote da 500€, 200€, 100€, 50€, 20€, 10€, 5€ e monete da 2€ e 1€).
//  (suggerimento: usare operatore %)
//
//  Esempio:
//      L’utente inserisce il valore 868
//      Il programma stamperà a schermo:
//          1 Banconota da 500;
//          1 Banconota da 200;
//          1 Banconota da 100;
//          1 Banconota da 50;
//          0 Banconota da 20;
//          1 Banconota da 10;
//          1 Banconota da 5;
//          1 Moneta da 2;
//          1 Moneta da 1;

#include <stdio.h>

int main() {

    int money;
    printf("Inserisci il valore del malloppo:  ");
    scanf("%d",&money);

    printf("%d Banconota da 500\n", money/500);
    money %= 500;
    printf("%d Banconota da 200\n", money/200);
    money %= 200;
    printf("%d Banconota da 100\n", money/100);
    money %= 100;
    printf("%d Banconota da 50\n", money/50);
    money %= 50;
    printf("%d Banconota da 20\n", money/20);
    money %= 20;
    printf("%d Banconota da 10\n", money/10);
    money %= 10;
    printf("%d Banconota da 5\n", money/5);
    money %= 5;
    printf("%d Moneta da 2\n", money/2);
    money %= 2;
    printf("%d Moneta da 1\n", money);

    return 0;
}