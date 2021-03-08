#include <stdio.h>

int main() {
    int num;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);
    do  
    { 
        if (num < 0) {
            printf("O número precisa ser inteiro positivo\n");
            printf("Digite um número inteiro positivo: ");
            scanf("%d", &num);
        } else {
            printf("Número: %d", num);
        }
    } while(num < 0);
}
