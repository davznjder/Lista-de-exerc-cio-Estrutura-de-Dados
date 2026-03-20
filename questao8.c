#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "português");
    
    int num1, num2, result1, result2;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num2);
    
result1= pow(num1, num2);
result2= pow(num2, num1);

printf("O primeiro número elevado ao segundo é: %d\nO segundo número elevado ao primeiro é: %d", result1, result2);
    
    return 0;
}
