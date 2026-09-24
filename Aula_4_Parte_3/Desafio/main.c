#include <stdio.h>
#include <conio.h>

int main(){
    int num;
    
    printf("Escreva um número para ver a tabuada: ");
    scanf("%d", &num);
    
    for (int i=0;i<=10;i++){
        printf("%d * %d = %d\n", num, i, num*i);
    }
return 0;
}
