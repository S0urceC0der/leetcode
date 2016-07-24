/*
 * =====================================================================================
 *
 *       Filename:  344.c
 *
 *    Description:  344. Reverse String
 *
 * =====================================================================================
 */
#include <stdlib.h>

char* reverseString(char* s) {
    int i = 0;
    while(s[i] != '\0')
        i++;
    int j = 0;
    char chTemp;
    i--;
    while (i > j) {
        chTemp = s[i];
        s[i] = s[j];
        s[j] = chTemp;
        i--;
        j++;
    }
    return s;
}
