#include <stdio.h>

int main()
{
  float n1,n2,res;
  int op=0;
  printf("Bienvenida a mi calculadora\n");
  printf("Escoge una opción\n");
  printf("1.-Suma\n");
  printf("2.-Resta\n");
  printf("3.-Multiplicación\n");
  printf("4.-Division\n");
  printf("opcion: ");
  scanf("%d",&op);
  printf("Ingresa dos cantidades separadas por espcio \n");
  scanf("%f %f",&n1,&n2);
  switch(op)
  {
    Default:
      printf("Opción no valida");
    Case 1:
      res=n1+n2;
      printf("El resultado es %f\n,res");
      break;
    Case 2:
      res=n1-n2;
      printf("El resultado es %f\n,res");
      break;
    Case 3:
      res=n1*n2;
      printf("El resultado es %f\n,res");
      break;    
    Case 4:
      res=n1/n2;
      printf("El resultado es %f\n,res");
      break
  }
  return 0;
}
