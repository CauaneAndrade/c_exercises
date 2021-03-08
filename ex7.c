/*
Calcular o fatorial de um número fornecido pelo usuário.
A função fatorial de um número natural n é o produto de todos os n primeiros números naturais.
Fat(n)=n!=1.2.3.4...n. Vamos tomar Fat(0)=1.
*/

#include <stdio.h>

int main() {
    int num, cont, result = 1;
    printf("Digite um número: ");
    scanf("%d", &num);

    for (cont = 1; cont <= num; cont++) {
        result *= cont; 
    }
    printf("Fat(%d) = %d \n", num, result);
}