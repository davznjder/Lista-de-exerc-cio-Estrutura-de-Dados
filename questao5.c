#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "português");
    
    int num, next;
    
    printf("Digite um número inteiro:");
    scanf("%d", &num);
    
    next=num+1;
    
    printf("O sucessor de %d é %d", num, next);

    return 0;
}
