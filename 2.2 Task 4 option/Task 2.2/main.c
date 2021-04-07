#include <stdio.h>
#include <math.h>

int main(void) {
    double t, pi = 3.14, x, y, a;

    printf("Write value: a");
    scanf("%lf", &a);

    printf("Write value: x");
    scanf("%lf", &x);
    printf("a = %6.3lf; x = %6.3lf\n", a, x);

    if (a<=x)
    {
        if (x+a == 0)
        {
            printf("Err \n");
        }
        y = (a + log(x + a));
    }
    else if (a>x)
    {
        if (a*x<0)
        {
            printf("Err \n");
        }
        y = sqrt(sin(a*x*pi/180));
    }

    if (a>y)
    {
        if (a-x == 0)
        {
            printf("Err \n");
        }
        t = y/(a-x);
    }
    else if (a=y)
    {
        if (a-x == 0 || pow(y, 2)==0)
        {
            printf("Err \n");
        }
        t = (y/(a-x))+((a+x)*pow(y, 2));
    }
    else if (a<y)
    {
        t = tan(a*x*pi/180)+cos(2*a*y*pi/180);
    }
    printf ("\nResults: \nt = %6.3lf; y = %6.3lf\n", t, y);
    
    return 0;
}