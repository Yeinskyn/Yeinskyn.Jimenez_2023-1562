#include <stdio.h>
#include <stdlib.h>

/*1- Calcula el descremento de una operaci�n aritm�tica donde est� involucrado el residuo.
2- Calcula incremento de una operaci�n ariim�tica.*/

void main(void)
{
    int i = 5, j = 7, k = 3, m1;
    float x = 2.5, z = 1.8, t;

    m1 = ((j % k) / 2) + 1;
    m1 += i;
    m1 %= --i;
    printf("\n El valor de m1 es: %i", m1);

    t = (j % k / 2);
    t++;
    x *= ++z;
    t -= (x += ++i);
    printf ("\n El valor de t es: %.2f", t);
    return 0;
}
