// Dados três números, imprimi-los em ordem crescente.

#include <stdio.h>

main() {
    float num1, num2, num3;
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    if (num3 > num1)
        if (num1 > num2)
        printf("A ordem crescente: %f %f %f\n", num2, num1, num3);
        else if (num2 < num3)
        printf("A ordem crescente: %f %f %f\n", num1, num2, num3);
    if (num1 > num2)
        if (num2 > num3)
        printf("A ordem crescente: %f %f %f\n", num3, num2, num1);
        else if (num3 < num1)
        printf("A ordem crescente: %f %f %f\n", num2, num3, num1);
    if (num1 < num2)
        if (num3 < num1)
        printf("A ordem crescente: %f %f %f\n", num3, num1, num2);
        else if (num3 < num2)
        printf("A ordem crescente: %f %f %f\n", num1, num3, num2);
}