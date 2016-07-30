/*
 * =====================================================================================
 *
 *       Filename:  171.c
 *
 *    Description:  171. Excel Sheet Column Number
 *
 * =====================================================================================
 */
#include <stdlib.h>

int titleToNumber(char* s) {
    int num = 0;
    while(*s != '\0') {
        num = (num * 26 ) + *s - 'A' + 1;
        s++;
    }
    return num;
}
