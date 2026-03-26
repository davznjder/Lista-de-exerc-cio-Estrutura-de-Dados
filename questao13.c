#include <stdio.h>

int main() {
    int num, i;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    printf("Os 5 sucessores de %d são:\n", num);
    
    for(i = 1; i <= 5; i++){
        printf("%d\n", num + i);
     }
    return 0;
}
