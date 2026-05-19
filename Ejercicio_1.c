#include <stdio.h>

void main()

{
    int num = 0;
    
    printf("Ingresa un valor: ");
    scanf("%d", &num);
    
    if(num > 0)
    {
        printf("El valor ingresado es positivo");
    }
    else if(num < 0)
    {
        printf("El valor ingresado es negativo");
    }
    else
    {
        printf("El valor ingresado es 0");
    }
}
