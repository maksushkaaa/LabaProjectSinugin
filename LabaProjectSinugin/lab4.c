#define _CRT_SECURE_NO_WARNINGS
#include "lab.h"
#include <stdio.h>

#define N 10

int lab4() {
    int m[N];
    int i;
    int x;
    int z;

    for (i = 0; i < N; i++)
        scanf("%d", &m[i]);

    x = m[1] - m[0];

    for (i = 0; i < N - 1; i++) {
        z = (m[i + 1] - m[i]);
        if (z != x)
            break;
    }

    if (i < N - 1)
        printf("The elements of the array do not constitute an arithmetic progression.\n");
    else
        printf("The elements of the array make up an arithmetic progression.\n");

    return 0;
}