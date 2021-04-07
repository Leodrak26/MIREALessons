
#include <stdio.h>
#include <math.h>
//Practice 1
//Var 12
int main()
{
    float z, pi = 3.14, t, y,x;
    printf ("Введите t и z:\n");
    scanf ("%f%f", &z, &t);
    y = tan((t+z)* pi / 180);
    x=(8*pow(z,2)+1)/(y*exp(t) + pow(t , 2));
    printf ("\nОтвет: \nx = %5.2f\n", x);
    return 0;
}
