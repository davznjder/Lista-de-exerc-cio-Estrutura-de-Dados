#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "português");
    
    float num1, num2, quociente;
    
    printf("Digite o dividendo ");
    scanf( "%f", &num1);
    
    printf("Digite o divisor ");
    scanf("%f", &num2);
    
    quociente= num1/num2;
    
    printf("A divisão é: %.2f", quociente);
    return 0;
}
