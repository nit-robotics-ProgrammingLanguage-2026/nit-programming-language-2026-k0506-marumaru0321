#include <stdio.h>

int main(void)
{
    double r;
    scanf("%lf", &r);
    if (r > 0)
    {
        printf("%.2lf", r * r * 22.00);
    }
    else
    {
        printf("NG");
    }
    return 0;
}
