//ENCUESTAS
#include <stdio.h>
#include <conio.h>
int main ()
{
   int edad, civil, problema;
   char nombre []={};
   int c1=0;
   int c2=0;
   int c3=0;
   int c4=0;
   int ciclo, cant;
   printf ("Cantidad de personas a entrevistar: ");
   scanf ("%d", &cant);
   for (ciclo=1; ciclo<=cant; ciclo++)
   {
      printf ("Ingrese su nombre: ");
      scanf ("%s", nombre);
      printf ("Ingrese su edad: ");
      scanf ("%d", &edad);
      printf ("Ingrese su estado civil : \n 1=CASADO \n 2=SOLTERO \n 3=VIUDO \n 4=DIVORCIADO \n");
      scanf ("%d", &civil);
      printf ("Ingrese un problema que le inquiete en : \n 1=BASURA EN LAS CALLES \n 2=INSEGURIDAD \n 3=PROBLEMAS PLUVIALES \n 4=BACHES \n");
      scanf ("%d", &problema);
      if ((edad>=18)&&(problema==1))c1++;
      if (problema==2)c2++;
      if ((civil==1)&&(problema==4))c3++;
      if ((problema==2)||(problema==3))c4++;

   }
    printf("Cantidad de personas ...\n");

    printf("Mayores de edad que opinan que el problema 1 es el mayor: %d \n ",c1);

    printf("Que opinaron que el problema 2 es el mayor : %d \n ", c2);

    printf("Casadas que eligieron  el problema 4: %d \n",c3);

    printf("Casadas que eligieron  el problema 3 o el 2: %d ", c4);

    return 0;
}
