/*
 * =====================================================================================
 *
 *       Filename:  13.c
 *
 *    Description:  13. Roman to Integer
 *
 *        Version:  1.0
 *        Created:  2016/09/11 21时14分31秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>

int getNum(char ch) {
    switch(ch)
    {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
}

int romanToInt(char* s) {
    int num = 0;
    int current = 0;
    int i = 0;
    int pre = 0;
    /*  
    if (s[i] != '\0') {
        num = getNum(s[i]);
        pre = num;
        i++;
    }*/
    while (s[i] != '\0') {
        current = getNum(s[i]);
        if (current > pre)
            num = current - 2 * pre + num;
        else
            num += current;
        i++;
        pre = current;
    }
    return num;
}

int main() {
    printf("%d\n", romanToInt("MCDXXXVII"));
    printf("%d\n", romanToInt("DCXXI"));
    printf("%d\n", romanToInt("MCMXCVI"));
    return 0;
}
