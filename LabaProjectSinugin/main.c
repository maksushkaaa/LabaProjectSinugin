#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "lab.h"

int main(void) {
    int choice;
    do {
        choice = 0; // Сброс выбора перед каждым новым вводом
        // Меню выбора лабораторной работы
        while (choice < 1 || choice > 7) {
            printf("1) 1st lab\n");
            printf("2) 2nd lab\n");
            printf("3) 3th lab\n");
            printf("4) 4th lab\n");
            printf("5) 5th lab\n");
            printf("6) 6th lab\n");
            printf("7) 7th lab\n");
            printf("Choose a number of lub: ");
            scanf("%d", &choice);
        }

        // Вызов выбранной лабораторной работы
        switch (choice) {
        case 1:
            lab1();
            break;
        case 2:
            lab2();
            break;
        case 3:
            lab3();
            break;
        case 4:
            lab4();
            break;
        case 5:
            lab5();
            break;
        case 6:
            lab6();
            break;
        case 7:
            lab7();
            break;
        default:
            printf("Incorrect number.\n");
        }

        // Пауза перед завершением программы
        printf("Enter any key to exit...\n");
        system("pause");
    } while (0); // Завершение программы после одного прохода

    return 0;
}
