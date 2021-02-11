#include <stdio.h>

/*
1 - Escreva um programa que determine o menor multiplo de um numero inteiro. Este 
    multiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via 
    teclado.
    Ex: menor multiplo de 13 maior que 100. Resultado: 104.
*/

int i, x, y, mult;

int main() {

printf("Digite o primeiro número: \n");
scanf("%d", &x);
printf("Digite o segundo número: \n");
scanf("%d", &y);

do{
    mult = x * i;
    i++;
} while (mult <= y);

printf("\nMenor multiplo de %d maior que %d. Resultado: %d", x, y, mult);

}