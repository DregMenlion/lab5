#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    int gr;
    double rad, x, a, b, y;
    const double k = -4;
    int A, B, C, result1, result2;

    setlocale(LC_CTYPE, "Russian");

    printf("Лабораторная работа 5\nЗадание 1\n");
    printf("Введите угол в градусах (целое число): ");
    scanf("%d", &gr);
    rad = gr * M_PI / 180;
    printf("Угол = %d градусов\n", gr);
    printf("В радианах = %.6f\n", rad);
    printf("Синус угла = %.6f\n", sin(rad));

    printf("\nЗадание 2\n");
    printf("Введите x (например, 1.3): ");
    scanf("%lf", &x);
    a = log(fabs(-k * x));
    b = exp(2 * x) + a * x;
    y = x * pow(a, 3) + pow(b, 2);
    printf("x = %.3f\n", x);
    printf("a = %.3f\n", a);
    printf("b = %.3f\n", b);
    printf("y = %.1f\n", y);

    printf("\nЗадание 3\n");
    A = (int)a;
    B = (int)b;
    C = (int)y;
    printf("A = %d, B = %d, C = %d\n", A, B, C);

    result1 = (A % 2 == 0 && B % 2 != 0) ||
              (A % 2 != 0 && B % 2 == 0);
    printf("Только одно из чисел A и B четное\n");
    printf("Условие выполнено (1 - да, 0 - нет): %d\n", result1);

    result2 = A % 3 == 0 && B % 3 == 0 && C % 3 == 0;
    printf("Каждое из чисел A, B, C кратно трем\n");
    printf("Условие выполнено (1 - да, 0 - нет): %d\n", result2);

    return 0;
}
