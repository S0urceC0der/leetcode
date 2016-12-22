/*
 * =====================================================================================
 *
 *       Filename:  12.c
 *
 *    Description:  12. Integer to Roman
 *
 * =====================================================================================
 */
#include <stdlib.h>


char * intToRoman(int num) {
    char * result = (char *) malloc(13 * sizeof(char));
    char roman_char[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int roman_value[] = {1, 5, 10, 50, 100, 500, 1000};
    int i = 6;
    int j = 0;
    while (i >= 0) {
        if (num < roman_value[i]) {
            i--;
            continue;
        }
        if (num > 3 * roman_value[i]) {
            result[j++] = roman_char[i];
            result[j++] = roman_char[i+1];
            num -= roman_value[i+1] - roman_value[i];
        } else {
            result[j++] = roman_char[i];
            num -= roman_value[i];
        }
    }
    result[j] = '\0';
    return result;
}


int main() {
    printf("%s\n", intToRoman(1437));
    printf("%s\n", intToRoman(621));
    printf("%s\n", intToRoman(1996));
    return 0;
}
