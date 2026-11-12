#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

double Power(double, int);
void main(void)
{
    int k;
    double Ans;

    printf("Calculate 3.5 to the power of k? Please input k=");
    scanf("%d", &k);

    Ans = Power(3.5, k);
    printf("3.5's %d power =%f\n", k, Ans);

}

double Power(double X, int n)
{
    int i;
    double PowerXn = 1;

    for (i = 1; i <= n; i++)
    {
        PowerXn = PowerXn * X;
    }

    return PowerXn;
}