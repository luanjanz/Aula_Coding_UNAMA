//Laços aninhados

#include <stdio.h>
int main(){

for (int linha = 1; linha <= 3; linha++) {

    for (int coluna = 1; coluna <= 4; coluna++) {
        printf("*");
    }

    printf("\n");
}

return 0;
}

// tabela multiplicação 10x10

#include <stdio.h>
int main(){

for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= 10; j++) {
        printf("%4d", i * j);
    }
    printf("\n");
    }
}
