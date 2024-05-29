#define _CRT_SECURE_NO_WARNINGS
#include "lab.h"
#include <stdio.h>

// Первая лабораторная работа: вычисление расстояния
int lab1() {
    float Vo, V, a; // Начальная скорость, скорость после торможения, торможение
    int t, s; // Время, расстояние

    printf("VO, t, V: "); // Ввод VO, t, V
    scanf("%f%d%f", &Vo, &t, &V);

    a = (Vo - V) / t; // Вычисление торможения
    s = (int)(V * t + (a * t * t) / 2); // Вычисление расстояния

    printf("Distance = %d\n", s);
    return 0;
}