#define _CRT_SECURE_NO_WARNINGS
#include "lab.h"
#include <stdio.h>

int lab2() {
    int c; // ������� ������ �� ������
    char first_letter = '\0'; // ������ ����� �������� �����
    char last_letter = '\0'; // ��������� ����� �������� �����
    int cnt = 0; // ������� ����, ��������������� �������

    printf("Enter a word:\n");
    while ((c = getchar()) != '.') {
        if (c == ' ' || c == '.' || c == ',') {
            if (first_letter != '\0' && first_letter == last_letter) {
                cnt++;
            }
            first_letter = '\0';
            last_letter = '\0';
        }
        else {
            if (first_letter == '\0') {
                first_letter = c;
            }
            last_letter = c;
        }
    }

    if (first_letter != '\0' && first_letter == last_letter) {
        cnt++;
    }

    printf("The number of words beginning and ending with the same letter : %d\n", cnt);
    return 0;
}