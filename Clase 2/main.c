#include <stdio.h>
#include <stdlib.h>

void calcular(int num1, int num2, int operacion);

int main()
{
calcular(1,1,2);
calcular(3,7,1);
calcular(10,2,4);
calcular(2,3,3);
}
void calcular(int num1, int num2, int operacion)
{
int resultado;
switch(operacion)
{
case 1:
resultado = num1+num2;
break;
case 2:
resultado = num1-num2;
break;
case 3:
resultado = num1*num2;
break;
case 4:
resultado = num1/num2;
break;
}
printf("%d",resultado);
}


//operaciones 1=suma 2=resta 3=multiplicacion 4=division
