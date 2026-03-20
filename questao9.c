#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "português");
    
    int num1, num2, resto;
    
    printf("Digite o dividendo ");
    scanf( "%d", &num1);
    
    printf("Digite o divisor ");
    scanf("%d", &num2);
    
    resto= num1%num2;
    
    printf("O resto da divisão é: %d", resto);
    return 0;
}
