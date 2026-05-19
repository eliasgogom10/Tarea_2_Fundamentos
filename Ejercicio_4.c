#include <stdio.h>

void main()

{
    int num = 0;
    int suma = 0;
    
    for(int cont = 0; cont < 10; cont++)
    {
        printf("Ingresa un valor: ");
        scanf("%d", &num);
        
        suma = suma + num;
    }
    
    printf("La sumatoria total es de %d", suma);
}
