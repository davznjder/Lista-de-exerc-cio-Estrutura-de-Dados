#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "português");
    int num1, num2, soma;
    
    printf("Digite o primero número inteiro:");
    scanf("%d", &num1);
    
    printf("Digite o segundo número inteiro:");
    scanf("%d", &num2);
    
    soma= num1+num2;
    
    printf("A soma dos números é: %d", soma);
    

    return 0;
}
