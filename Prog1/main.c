#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int edad;
    float altura;
    char sexo;
    char seguir;
    int edadMMV;
    float alturaMMV;
    int flagVieja = 0;
    int flagJoven =0;
    float alturaJoven;
    int minimaEdad;
    int edadHMB;
    float alturaMinima;
    int flagPetiso = 0;



   do
   {
    printf("\nIngrese la edad:");
    scanf("%d",&edad);
    while (edad < 0 || edad > 100)
    {
        printf("\nReingrese la edad:");
        scanf("%d", &edad);
    }

    printf("\nIngrese la altura:");
    scanf("%f",&altura);

    while(altura < 1 || altura > 2 )
    {
        printf("\nReingrese la altura:");
        scanf("%f",&altura);
    }

    printf("\nIngrese sexo (m/f):");
    sexo = getche ();
    sexo = tolower(sexo);
    while (sexo != 'f' && sexo != 'm')
    {
        printf("\nReingrese sexo:");
        sexo = getche ();
        sexo = tolower(sexo);
    }

    if (sexo == 'f')
    {
    if (flagVieja == 0 || edad > edadMMV)
    {
        edadMMV = edad;
        flagVieja = 1;
    }
    else {
//usar este else para todo lo que tenga que hacer con un masculino
    }
    }

    if (flagJoven == 0 || edad < minimaEdad)
    {
        //falta hacer esto
    }




    fflush(stdin);
    printf("\nDesea continuar? (s/n) ");
    scanf("%c", &seguir);
   } while (seguir == 's');
}
