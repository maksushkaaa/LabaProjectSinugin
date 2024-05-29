#define _CRT_SECURE_NO_WARNINGS
#include "lab.h"
#include <stdio.h>

#define K 3
#define N 4

int lab6() {
    long long int x[K][N];
    long long int b, max, min, strmax, strmin;
    long long int i, j;

    for (i = 0; i < K; i++)
        for (j = 0; j < N; j++)
            scanf("%lld", &x[i][j]);

    max = x[0][0];
    for (i = 0; i < K; i++)
        for (j = 0; j < N; j++)
            if (x[i][j] > max) {
                max = x[i][j];
                strmax = i;
            }

    min = x[0][0];
    for (i = 0; i < K; i++)
        for (j = 0; j < N; j++)
            if (x[i][j] < min) {
                min = x[i][j];
                strmin = i;
            }

    for (j = 0; j < N; j++) {
        b = x[strmax][j];
        x[strmax][j] = x[strmin][j];
        x[strmin][j] = b;
    }

    if (strmin == strmax)
        printf("The maximum and minimum values are on the same line.\n");
    else {
        for (i = 0; i < K; i++) {
            for (j = 0; j < N; j++)
                printf("%4lld ", x[i][j]);
            printf("\n");
        }
    }

    return 0;
}