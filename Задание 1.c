#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    int num1, num2;

    puts("введите первое число");
    scanf("%d", &num1);
    printf("Введено число %d\n", num1);

    puts("введите второе число");
    scanf("%d", &num2);
    printf("Введено число %d\n", num2);

    printf("Сумма: %d\n", num1 + num2);
    printf("Разность: %d\n", num1 - num2);
    printf("Произведение: %d\n", num1 * num2);

    if (num2 != 0) {
        printf("Частное: %d\n", num1 / num2);
        printf("Остаток от деления: %d\n", num1 % num2);
    }
    else {
        printf("Ошибка: деление на ноль!\n");
    }

    return 0;
}