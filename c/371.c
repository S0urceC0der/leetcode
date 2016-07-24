/*
 * =====================================================================================
 *
 *       Filename:  371.c
 *
 *    Description:  371. Sum of Two Integers
 *
 * =====================================================================================
 */
#include <stdio.h>

int getSum(int a, int b) {
    while (b != 0) {
        a = a ^ b;
        // printf("1. a=%x, b=%x\n", a, b);
        // printf("1a. !a=%x, b&(!a)=%x\n", !a, b & (!a));
        b = (b &(~a)) << 1;
        // printf("2. a=%x, b=%x\n", a, b);
    }
    return a;
}

int main() {
    int i;
    // getSum(1, 2);
    // return 0;
    for (i = 0; i < 10; i++) {
        printf("%d + 2 ", i);
        if (getSum(i, 2) != i+2)
            printf("Error \n");
        else
            printf("Ok \n");
    }   
    return 0;
}
