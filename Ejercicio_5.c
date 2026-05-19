#include <stdio.h>

void main()

{
    int num = 0;
    int suma = 0;
    float prom= 0;
    
    for(int cont = 0; cont < 10; cont++)
    {
        printf("Ingresa un valor: ");
        scanf("%d", &num);
        suma = suma + num;
    }
    
    prom = suma / 10.00;
    
    printf("La sumatoria total es de %d\n", suma);
    printf("El promedio es %f\n", prom);
}
