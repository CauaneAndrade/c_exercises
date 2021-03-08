/* 
Dado um número inteiro positivo n verificar se é par ou ímpar.
Apresente uma mensagem na tela informando o número e o resultado.
dica: % utilizado para calcular o resto.
*/

#include <stdio.h>

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    if (num % 2) {
        printf("o número %d é ímpar \n", num);
    } else {
        printf("o número %d é par \n", num);
    }
}
