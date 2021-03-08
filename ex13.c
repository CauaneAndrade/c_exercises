/*
Dados um inteiro x e um inteiro não-negativo n, calcular x n.
*/
#include <stdio.h>

int main() {
    int x, n;
    printf("Digite um número inteiro: ");
    scanf("%d", &x);
    printf("Digite um número inteiro não-negativo: ");
    scanf("%d", &n);

    if (n >= 0) {
        printf("Reultado = %d \n", x * n);
    }
    else {
        printf("%d precisa ser um número não-negativo \n",n);
    }
}