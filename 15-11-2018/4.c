#include <stdio.h>
#include <math.h>
int a, b, i, j;
void draw(int a, int b)
{
    if (b % 2 == 0)
        b--;
    for (i = 0; i < b; i++)
    {
        for (j = 0; j < a; j++)
            if (fabsf((float) ((a - 1) / 2 - i)) <= j && (((a - 1) / 2 > i && (a - 1) / 2 + i + a - b >= j) || ((a - 1) / 2 <= i && a - 1 + (a - 1) / 2 - i >= j)))
                printf("*");
            else
                printf(".");
        printf("\n");
    }
}
int fac(int n)
{
	if(n <= 0)
		return 1;
    return n * fac(n - 1);
}
int main()
{
    printf("Input A : ");
    scanf("%d", &a);
    printf("Input B : ");
    scanf("%d", &b);
    draw(a, a);
    draw(b, b);
    printf("Factorial (A) = %d\nFactorial (B) = %d\nA/B = %.2f\nCeil (A/B) = %.2f\nFloor (A/B) = %.2f", fac(a), fac(b), (float) a / b, ceilf((float) a / b), floorf((float) a / b));
}
