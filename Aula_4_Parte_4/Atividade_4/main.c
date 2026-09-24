#include <stdio.h>
int main(){

// break: imprime 1 ate 9
for (int i = 1; i <= 100; i++) {
    if (i == 10) {
        break;
    }
    printf("%d\n", i);
}

// continue: pula o 5

for (int i = 1; i <= 10; i++) {
    if (i == 5) {
        continue;
    }
    printf("%d\n", i);

    
}

return 0;

}
