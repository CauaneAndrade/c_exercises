// Faça um programa que solicite o ano em que uma pessoa nasceu e retorne sua idade.

#include <stdio.h>

int main() {
    int ano, idade;
    printf("Digite o ano de seu nascimento: ");
    scanf("%d", &ano);
    idade = 2021 - ano;
    printf("Você tem ou fará %d anos \n", idade);
}