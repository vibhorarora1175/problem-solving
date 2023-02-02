// find the roots of a quadratic equation
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float x, y, d, m, j;
    printf("enter the coefficients of the quadratic equations a,b and c");
    scanf("%d %d %d", &a, &b, &c);
    d = b * b - (4 * a * c);
    if (d >= 0)
    {
            printf("roots are real");
            m = sqrt(d);
            x = (-b + m) / (2 * a);
            y = (-b - m) / (2 * a);
            printf("\n%f %f", x, y);
    }
    else if (d < 0)
    {
        printf("roots are not real\n");
        j = (-1) * d;
        m = sqrt(j);
        float q, p;
        q = (float)b / (2 * a);
        p = m / (2 * a);
        printf("%f + i%f", q, p);
        printf("\n%f - i%f", q, p);
    }
    return 0;
}