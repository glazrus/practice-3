#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    float a, b;

    printf("¬ведите число a: ");
    scanf("%f", &a);
    printf("¬ведите число b: ");
    scanf("%f", &b);

    printf("___________________\n");
    printf("| a * b | a+b   | a-b  |\n");
    printf("-------------------------------\n");
    printf("| %.0f * %.0f |  %.0f+%.0f  |%.0f-%.0f  |\n", a, b, a, b, a, b);
    printf("-------------------------------\n");
    printf("| %5.0f  | %5.0f    | %4.0f   |\n", a * b, a + b, a - b);
    printf("-------------------------------\n");

    return 0;
}