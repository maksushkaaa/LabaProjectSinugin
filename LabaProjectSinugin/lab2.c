#define _CRT_SECURE_NO_WARNINGS
#include "lab.h"
#include <stdio.h>

int lab2() {
    int c; // текущий символ из потока
    char first_letter = '\0'; // перва€ буква текущего слова
    char last_letter = '\0'; // последн€€ буква текущего слова
    int cnt = 0; // счетчик слов, удовлетвор€ющих условию

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