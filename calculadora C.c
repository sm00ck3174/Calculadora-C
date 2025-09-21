#include <stdio.h>

int main() {
    int operacao, A, B;

    while (1) { 
        printf("\n---ESCOLHA A OPERAÇÃO---\n");
        printf("[1] SOMA\n");
        printf("[2] SUBTRAÇÃO\n");
        printf("[3] MULTIPLICAÇÃO\n");
        printf("[4] DIVISÃO\n");
        scanf("%d", &operacao);

        if (operacao == 1) {
            printf("ESCOLHA O PRIMEIRO NÚMERO PARA SOMAR\n");
            scanf("%d", &A);
            printf("ESCOLHA O SEGUNDO NÚMERO PARA SOMAR\n");
            scanf("%d", &B);

            int soma = A + B;
            printf("A SOMA DE %d com %d é: %d\n", A, B, soma);

        } else if (operacao == 2) {
            printf("ESCOLHA O PRIMEIRO NÚMERO PARA SUBTRAIR\n");
            scanf("%d", &A);
            printf("ESCOLHA O SEGUNDO NÚMERO PARA SUBTRAIR\n");
            scanf("%d", &B);

            int sub = A - B;
            printf("A SUBTRAÇÃO DE %d com %d é: %d\n", A, B, sub);

        } else if (operacao == 3) {
            printf("ESCOLHA O PRIMEIRO NÚMERO PARA MULTIPLICAR\n");
            scanf("%d", &A);
            printf("ESCOLHA O SEGUNDO NÚMERO PARA MULTIPLICAR\n");
            scanf("%d", &B);

            int mult = A * B;
            printf("A MULTIPLICAÇÃO DE %d com %d é: %d\n", A, B, mult);

        } else if (operacao == 4) {
            printf("ESCOLHA O PRIMEIRO NÚMERO PARA DIVIDIR\n");
            scanf("%d", &A);
            printf("ESCOLHA O SEGUNDO NÚMERO PARA DIVIDIR\n");
            scanf("%d", &B);

            if (B == 0) {
                printf("ERRO: divisão por zero!\n");
            } else {
                float divis = (float) A / B; 
                printf("A DIVISÃO DE %d com %d é: %.2f\n", A, B, divis);
            }

        } else {
            printf("VOCÊ NÃO DIGITOU UMA OPÇÃO VÁLIDA. TENTE NOVAMENTE!!\n");
            continue;
        }
    }

    return 0;
}
