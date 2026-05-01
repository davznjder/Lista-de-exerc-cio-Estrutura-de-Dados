#include <stdio.h>

int main() {

    int x;

        printf("Digite um valor inteiro:");
        scanf("%d", &x);

        printf("Os sucessores deste numero sao: \n");

        for(int i=1; i<=5; i++){
            printf("%d\n", x+i);
        }
        return 0;
}
