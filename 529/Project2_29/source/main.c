#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return 0;
    }
    return abs(a * b) / gcd(a, b);
}

int main(void)
{
    int num1, num2;
    printf("\n=== NEW PROGRAM START ===\n");
    printf("Please enter two integers (separated by space):\n");
    if (scanf("%d %d", &num1, &num2) == 2)
    {
        printf("The LCM of %d and %d is: %d\n", num1, num2, lcm(num1, num2));
    }
    printf("=== PROGRAM END ===\n");
    return 0;
}