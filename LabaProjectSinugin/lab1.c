#define _CRT_SECURE_NO_WARNINGS
#include "lab.h"
#include <stdio.h>

// ������ ������������ ������: ���������� ����������
int lab1() {
    float Vo, V, a; // ��������� ��������, �������� ����� ����������, ����������
    int t, s; // �����, ����������

    printf("VO, t, V: "); // ���� VO, t, V
    scanf("%f%d%f", &Vo, &t, &V);

    a = (Vo - V) / t; // ���������� ����������
    s = (int)(V * t + (a * t * t) / 2); // ���������� ����������

    printf("Distance = %d\n", s);
    return 0;
}