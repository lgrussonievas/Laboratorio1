#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    float altura;
    char sexo;
    char seguir;
    int edadU;
    float alturaU;
    int acumuladorM;
    int promedio;
    int MM1;

    edadU = 0;
    alturaU = 0;
    MM1 = 0;

   do {
printf("\n Ingrese la edad:");
scanf("%d",&edad);
printf("\n Ingrese la altura:");
scanf("%f",&altura);
fflush(stdin);
printf("\n Ingrese el sexo (f/m)");
scanf("%c",&sexo);
fflush(stdin);
printf("\n Cargar otro?(s/n)");
scanf("%c",&seguir);

if(edadU<edad && sexo=='f')
{
edadU = edad;
alturaU = altura;
}

if (sexo=='m')
{
    acumuladorM = edad + acumuladorM;
    MM1++;
}


}while (seguir == 's');

promedio = acumuladorM / MM1;
printf("\n La altura de la mujer mas longeva es %f",alturaU);
printf("\n El promedio de edad de los hombres es %d",promedio);
    }


