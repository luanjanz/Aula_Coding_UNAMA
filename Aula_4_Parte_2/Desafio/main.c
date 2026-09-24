#include <stdio.h>
#include <conio.h>

int main(){
    int opcao;
    char nome[30];
    do {
        printf("1 - Mostrar Mensagem\n");
        printf("2 - Mostrar seu nome\n");
        printf("0 - Sair\n");
        
        scanf("%d", &opcao);
        
        switch (opcao){
            case 1:
            printf("Hello World!\n");
            break;
            
            case 2:
            printf("Olá, Luan!");
            break;
            
            case 0:
            printf("Saindo....\n");
            break;
            
            default:
                printf("Opção Invalida!\n");
        }
    }   while (opcao != 0);
    
    return 0;
}
