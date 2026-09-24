#include <stdio.h>
int main(){

int senha;
int tentativas = 0;

while (tentativas < 3) {
    printf("Senha: ");
    scanf("%d", &senha);

    if (senha == 1234) {
        printf("Acesso permitido\n");
        break;
    }

    printf("Senha incorreta\n");
    tentativas++;
}

printf("Entrada invalidada!");
return 0;

    
}
