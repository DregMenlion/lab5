#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    double x, h;
    const double y = 0.869e-2;
    const double z = -0.13e3;

    setlocale(LC_CTYPE, "Russian");

    printf("Домашнее задание к работе 5\nВариант 15\n");
    printf("Введите x (для контрольного примера 2.444): ");
    scanf("%lf", &x);

    h = (pow(x, y + 1) + exp(y - 1)) /
        (1 + x * fabs(y - tan(z))) * (1 + fabs(y - x))
        + pow(fabs(y - x), 2) / 2
        - pow(fabs(y - x), 3) / 3;

    printf("x = %.3f\n", x);
    printf("y = %.5f\n", y);
    printf("z = %.0f\n", z);
    printf("h = %.5f\n", h);

    return 0;
}
