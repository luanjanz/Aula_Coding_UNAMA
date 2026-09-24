#include <stdio.h>
int main(){

int numero;
int maior,menor;

printf("Escreva um número: ");
scanf("%d", &maior);

menor = maior;
for (int i = 2; i <= 5; i++) {
  printf("Escreva um número: ");  
  scanf("%d", &numero);

    if (numero > maior) {
        maior = numero;
    } else if (numero < menor){
      menor = numero;
    }
}

printf("Maior = %d\n", maior);
printf("Menor = %d\n", menor);

return 0;
}
