#include <stdio.h>
#include <stdlib.h>

/* Es un c�digo de comparaci�n de verdadero y falso*/

void main(void)
{
    int i = 15, j, k, l; // declaracion de variables.

    j = (15 > j--) > (14 < ++i); // �El operando con descremento es mayor que el operando con incremento? Como no es cierto, arrojar� un 0.
    printf("\n El valor de j es: %d", j); // imprimiendo resultado de la comparacion.

    k = ! ( 'b' != 'd') > (!i - 1); // Si un operando es diferente al otro, arrojar� un 1 (positivo).
    printf("\n El valor de k es: %d", k); // imprimiendo resultado de la comparacion.

    l = (! (34 > 70 % 2)|| 0); // la disyunci�n || es falso solo cuando ambas preposiciones son falsas.
    printf("\n El valor de l es: %d", l); // imprimiendo resultado de la comparaci�n.
}
