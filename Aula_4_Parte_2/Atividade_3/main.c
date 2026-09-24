#include <stdio.h>

int main(void) {
    int opcao;

    do {
        printf("1 - Cadastrar\n");
        printf("2 - Consultar\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Cadastrar\n");
                break;
            case 2:
                printf("Consultar\n");
                break;
            case 0:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opcao invalida\n");
        }

    } while (opcao != 0);

    return 0;
}
