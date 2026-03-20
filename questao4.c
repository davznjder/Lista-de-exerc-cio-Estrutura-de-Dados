#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "português");
    int num1, num2, multi;
    
    printf("Digite o primero número inteiro:");
    scanf("%d", &num1);
    
    printf("Digite o segundo número inteiro:");
    scanf("%d", &num2);
    
    multi= num1*num2;
    
    printf("A multiplicação dos números é: %d", multi);
    

    return 0;
}
