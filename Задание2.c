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

    puts("�������� ��� �����:");
    puts("1 - ���������� ���� (2.54 ��)");
    puts("2 - ��������� ���� (2.32166 ��)");
    puts("3 - �������������� ���� (2.7076 ��)");
    scanf("%d", &choice);

    puts("������� ���������� ������:");
    scanf("%d", &dym);

    switch (choice) {
    case 1:
        result = ENGLISH_INCH * dym;
        printf("%d ���������� ������ - ��� %.2f ��\n", dym, result);
        break;
    case 2:
        result = SPANISH_INCH * dym;
        printf("%d ��������� ������ - ��� %.2f ��\n", dym, result);
        break;
    case 3:
        result = OLD_LITHUANIAN_INCH * dym;
        printf("%d �������������� ������ - ��� %.2f ��\n", dym, result);
        break;
    default:
        puts("�������� �����!");
    }

    return 0;
}