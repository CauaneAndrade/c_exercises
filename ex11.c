/*
Dado um número inteiro positivo n, calcular a soma dos n primeiros números naturais.
*/

#include <stdio.h>

int main() {
    int num, result=0, cont;
    printf("Digite um número: ");
    scanf("%d", &num);

    for (cont = 1; cont <= num; cont++) {
        result += cont; 
    }
    printf("Soma dos números é %d \n", result);
}