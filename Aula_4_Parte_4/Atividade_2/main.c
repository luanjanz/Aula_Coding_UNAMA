//Contar positivos
#include <stdio.h>
int main(){

int positivos = 0;
int numero;

for (int i = 1; i <= 10; i++) {
    
    printf("Escreva um número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        positivos++;
    }
}

printf("Positivos: %d\n", positivos);

return 0;
}

//Somar apenas os pares

#include <stdio.h>
int main(){

int soma = 0;
int numero;

for (int i = 1; i <= 10; i++) {
    printf("Escreva um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        soma += numero;
    }
}

printf("Soma dos pares: %d\n", soma);

return 0;
}
