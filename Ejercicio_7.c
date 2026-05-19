#include <stdio.h>

void main()

{
    int num = 0;
    int suma = 0;
    int producto = 1;

    for(int cont = 0; cont < 20; cont++)
    {
        printf("Ingresa un valor: ");
        scanf("%d", &num);

        // numeros pares
        if(num % 2 == 0)
        {
            suma = suma + num;
        }

        // numeros impares
        else
        {
            producto = producto * num;
        }
    }

    printf("La suma de los pares es %d\n", suma);
    printf("El producto de los impares es %d\n", producto);
}
