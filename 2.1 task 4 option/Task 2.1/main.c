#include <stdio.h>
#include <math.h>

int main(void) {
    double x, y;
    printf("Write coord x: ");
    scanf("%lf", &x);

    printf("Write coord y: ");
    scanf("%lf", &y);
    printf("x = %6.3lf; y = %6.3lf\n", x, y);

    if ((x>= 0 && y <= 0 && pow(x, 2) + pow(y, 2) <=1) ||  (x >= -1 && y <= 1&& x <= 0 && y>= 0))
    {
        printf("Point falls into the area\n");
    } else{
        printf("Point does not falls into the area\n");
    }

    return 0;
}