/*
Dada uma sequência de números inteiros não-nulos, começando por 1,imprimir seus quadrados.
*/

#include <stdio.h>

int main() {
    int num, result, i;
    printf("Digite um número: ");
    scanf("%d", &num);

    do {
        result = num * num;
        printf("O quadrado de %d é %d \n", num, result);
        printf("Digite um número: ");
        scanf("%d", &num);
    } while (num != 0);
}