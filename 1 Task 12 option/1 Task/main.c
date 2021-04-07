#include <stdio.h>
#include <math.h>

int main()
{
    float z, pi = 3.14, t, y,x;
    printf ("Write 't' and 'z': \n");
    scanf ("%f%f", &z, &t);
    y = tan((t+z)* pi / 180);
    x=(8*pow(z,2)+1)/(y*exp(t) + pow(t , 2));
    printf ("\nAnswer: \nx = %5.2f\n", x);
    return 0;
}
