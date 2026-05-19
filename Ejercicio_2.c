#include <stdio.h>

void main()

{
    int cont = 0;
    int num = 0;
    
    for(int cont = 0;cont < 10; cont++)
    {
        printf("Ingresa un valor: ");
        scanf("%d", &num);
        
        if(num > 100)
        {
            printf("El valor ingresado es mayor a 100\n");
        }
        else if(num < 10)
        {
            printf("El valor ingresado es menor a 10\n");
        }
        else
        {
            printf("El valor ingresado está comprendido entre 10 y 100\n");
        }
    }
}
