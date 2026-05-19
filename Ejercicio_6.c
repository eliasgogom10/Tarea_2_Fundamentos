#include <stdio.h>

void main()

{
    int num = 0;
    int validos = 0;
    int suma= 0;
    float prom = 0;
    
    for(int cont = 0; cont < 10; cont++)
    {
        printf("Ingresa un valor: ");
        scanf("%d", &num);
        
        if(num >= 5 && num <= 2500)
        {
            validos++;
            suma = suma + num;
        }
    }
    
    prom = suma / (float)validos;
    
    printf("El promedio es %f", prom);
}
