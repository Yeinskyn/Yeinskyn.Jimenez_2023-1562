#include <stdio.h>

// Al introducir los valores de i, j y k, imprimira el resultado de la operacion.

void main(void)
{
    int i, j, k = 2, l = 7;

    i = 9 + 3 * 2;
    j = 8 % 6 + 4 * 2;
    i %= j;
    printf("\n El valor de i es : %d", i);

    ++ l;
    --k = l++ * 2;
    printf("\n El valor de k es : %d", k);

    i = 5.5 - 3 * 2 % 4;
    j = (i * 2 - (k = 3, --k));
    printf("\n El valor de j es : %d", j);
}
