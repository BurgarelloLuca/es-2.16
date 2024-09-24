#include<stdio.h>

int main() {
    float prezzoBiglietto, provvigione, prezzoFinale;
    printf("Inserisci il prezzo del biglietto");
    scanf("%f", &prezzoBiglietto);
    provvigione= prezzoBiglietto*15/100;
    if (provvigione<5) {
        provvigione=5 ;}
    printf("il provvigione e' %f", provvigione);
    prezzoFinale=prezzoBiglietto+provvigione;
    printf("il prezzo finale e' %f", prezzoFinale);
}
