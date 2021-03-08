/*
Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.
*/
#include <stdio.h>

int main() {
    int num, i=0, c=1;
    printf("Digite um número: ");
    scanf("%d", &num);

    while(i < num) {
        printf("%d \n", c);
        c += 2;
        i++;
    }
    
}