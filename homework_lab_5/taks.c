#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#define M_PI
#include <locale.h>


int main() {
    setlocale(LC_ALL, "RUS");
    double x, y, t, F;
    t = 0.5;
    printf("¬ведите x: ");
    scanf("%lf", &x);
    printf("¬ведите y: ");
    scanf("%lf", &y);
    if ((2 * y + 3 * x) <= 0) {
        printf("ќшибка: аргумент логарифма должен быть больше 0\n");
        return 1;
    }
    if (x < 0) {
        printf("ќшибка: подкоренное выражение не может быть отрицательным\n");
        return 1;
    }
    F = (pow(sin(x), 3) + log(2 * y + 3 * x)) / (pow(t, t) + sqrt(x));
    printf("F(%.2lf, %.2lf) = %.6lf\n", x, y, F);

    return 0;
}