#include <stdio.h>
#include <locale.h>

#define ENGLISH_INCH 2.54
#define SPANISH_INCH 2.32166
#define OLD_LITHUANIAN_INCH 2.7076

int main() {
    setlocale(LC_ALL, "RUS");

    int dym;
    float result;
    int choice;

    puts("Выберите тип дюйма:");
    puts("1 - Английский дюйм (2.54 см)");
    puts("2 - Испанский дюйм (2.32166 см)");
    puts("3 - Старолитовский дюйм (2.7076 см)");
    scanf("%d", &choice);

    puts("Введите количество дюймов:");
    scanf("%d", &dym);

    switch (choice) {
    case 1:
        result = ENGLISH_INCH * dym;
        printf("%d английских дюймов - это %.2f см\n", dym, result);
        break;
    case 2:
        result = SPANISH_INCH * dym;
        printf("%d испанских дюймов - это %.2f см\n", dym, result);
        break;
    case 3:
        result = OLD_LITHUANIAN_INCH * dym;
        printf("%d старолитовских дюймов - это %.2f см\n", dym, result);
        break;
    default:
        puts("Неверный выбор!");
    }

    return 0;
}