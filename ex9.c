/*
Crie um programa por meio do qual o usuário irá digitar a operação desejada e dois valores, ao final
deverá ser exibido o resultado da operação.
Opções disponíveis: 1 – Divisão; 2 – resto da divisão; 3 – adição; 4 – multiplicação.
Obs: Utilizar: do-while (para o menu) e o comando switch.
*/

#include <stdio.h>

int main() {
    int num1, num2, operacao;
    printf("Opções disponíveis: \n 1 – Divisão\n 2 – resto da divisão\n 3 – adição\n 4 – multiplicação\n");
    do {
        printf("Digite a operação matemática: ");
        scanf("%d", &operacao);
        printf("Digite o primeiro número: ");
        scanf("%d", &num1);
        printf("Digite o segundo número: ");
        scanf("%d", &num2);
        switch(operacao) {
            case 1:
                printf("Resultado = %d\n\n", num1 / num2);
                break;
            case 2:
                printf("Resultado = %d\n\n", num1 % num2);
                break;
            case 3:
                printf("Resultado = %d\n\n", num1 + num2);
                break;
            case 4:
                printf("Resultado = %d\n\n", num1 * num2);
                break;
            default :
                printf("operação matemática inválida!\n");
        }
    } while(operacao >=1 && operacao <=4);
}