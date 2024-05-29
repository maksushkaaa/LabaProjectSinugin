#define _CRT_SECURE_NO_WARNINGS
#include "lab.h"
#include <stdio.h>
#define MAX 1000

int lab3() {
    int i = 0;
    int j = 0;
    char c;
    char line[MAX];
    char buffer[MAX];
    int flag = 0;
    int size = sizeof(buffer) / sizeof(char);

    printf("Enter a sentence with commas: ");
    fgets(buffer, MAX, stdin);

    do {
        c = buffer[i];

        if (c == ',' && i + 2 < size) {
            line[j++] = ' ';
            flag = 1;
            i += 2;
        }

        if (flag) {
            if (buffer[i] == ' ' || buffer[i] == '.' || buffer[i] == '\t') {
                flag = 0;
            }
            i++;
            continue;
        }

        line[j] = c;
        i++;
        j++;
    } while (c != '\0');

    puts(line);
    return 0;
}