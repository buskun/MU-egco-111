#include <stdio.h>
#include <math.h>
int fac(int n)
{
    return n <= 0 ? 1 : n * fac(n - 1);
}
int main()
{
    int a, b, i, j;
    printf("Input A : ");
    scanf("%d", &a);
    printf("Input B : ");
    scanf("%d", &b);
    for (i = 0; i < (a % 2 == 0 ? a - 1 : a); i++)
        for (j = 0; j < a; j++)
            printf("%c%c", fabsf((float) ((a - 1) / 2 - i)) <= j && ((a - 1) / 2 > i ? (a - 1) / 2 + i + (a % 2 == 0 ? 1 : 0) : a - 1 + (a - 1) / 2 - i) >= j ? '*' : '.', j == a - 1 ? '\n' : 0);
    for (i = 0; i < (b % 2 == 0 ? b - 1 : b); i++)
        for (j = 0; j < b; j++)
            printf("%c%c", fabsf((float) ((b - 1) / 2 - i)) <= j && ((b - 1) / 2 > i ? (b - 1) / 2 + i + (b % 2 == 0 ? 1 : 0) : b - 1 + (b - 1) / 2 - i) >= j ? '*' : '.', j == b - 1 ? '\n' : 0);
    printf("Factorial (A) = %d\nFactorial (B) = %d\nA/B = %.2f\nCeil (A/B) = %.2f\nFloor (A/B) = %.2f", fac(a), fac(b), (float) a / b, a / b * b == a ? (float) a / b : a / b + 1.00, (float) (a / b));
}