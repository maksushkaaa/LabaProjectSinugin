#define _CRT_SECURE_NO_WARNINGS
#include "lab.h"
#include <stdio.h>

int lab7() {
    long z;
    unsigned long y, c, mask = 1;
    int counter = 0;
    int cntall = 0;
    int pos = 0;
    int no = 1;

    printf("z = ");
    scanf("%lx", &z);

    c = y = (unsigned int)z;

    while (y != 0) {
        cntall += y & mask;
        y >>= 1;
    }

    y = c;

    while (y != 0) {
        counter += y & mask;

        if (counter == (cntall / 2)) {
            if (cntall % 2 == 1) {
                counter = 0;

                while (y != 0) {
                    pos++;
                    y >>= 1;
                    counter += y & mask;

                    if (counter == 1) {
                        no = 0;
                        printf("position: %d\n", pos);
                        break;
                    }
                }
            }

            if (cntall % 2 == 0) {
                pos++;
                y >>= 1;
                counter += y & mask;

                if (counter == (cntall / 2)) {
                    no = 0;
                    printf("position: %d\n", pos);
                    break;
                }
            }
            else {
                break;
            }
        }

        pos++;
        y >>= 1;
    }

    if (no == 1) {
        printf("NOOOO\n");
    }

    return 0;
}