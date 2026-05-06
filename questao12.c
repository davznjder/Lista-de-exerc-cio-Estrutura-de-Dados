#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    if(num % 2 == 0) {
         for (int i = 1; i <= 10; i++) {
            printf("%d\n", num + 2 * i);
      }
    }else{ 
        printf("O número não é impar:\n");
    }

    return 0;
}
