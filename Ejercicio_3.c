#include <stdio.h>

void main()

{
    int num = 0;
    int suma = 0;
    
    while(suma <= 78500)
    {
        printf("Ingresa el número a sumar: ");
        scanf("%d", &num);
        
        suma = suma + num;
    }
    printf("La suma total es de %d", suma);
}
