/*
Calcular a tabuada de um número fornecido pelo usuário multiplicado de 0 a 12. O resultado deverá ser

apresentado da seguinte maneira:
Número x 0 = Resultado1.
Número x 1 = Resultado2.
.
.
.
Número x 10 = Resultado n
*/

#include <stdio.h>

main() {
    int num, result, i;
    printf("Digite um número: ");
    scanf("%d", &num);

    for (i = 0; i <= 10; i++) {
        result = num * i;
        printf("%d x %d = %d \n", num, i, result);
    }
}