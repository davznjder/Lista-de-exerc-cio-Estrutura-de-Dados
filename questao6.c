#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "português");
    
    int num, raiz;
    
    printf("Digite um número inteiro:");
    scanf("%d", &num);
    
    if (num>0){
        raiz= sqrt(num);
        printf("A raiz quadrada é: %d", raiz);
    } else{
        printf("Valor inválido, tente novamente");
    }
    return 0;
}
