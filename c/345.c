/*
 * =====================================================================================
 *
 *       Filename:  345.c
 *
 *    Description:  345. Reverse Vowels of a String
 *
 * =====================================================================================
 */
#include <stdlib.h>

char* reverseVowels(char* s) {
    int j = 0;
    while(s[j] != '\0')
        j++;
    j--;
    int i = 0;
    char chTemp;
    while (i < j) {
        while (i < j && s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'
                && s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U')
            i++;
        while (i < j && s[j] != 'a' && s[j] != 'e' && s[j] != 'i' && s[j] != 'o' && s[j] != 'u'
                && s[j] != 'A' && s[j] != 'E' && s[j] != 'I' && s[j] != 'O' && s[j] != 'U')
            j--;
        if (i < j) {
            chTemp = s[i];
            s[i] = s[j];
            s[j] = chTemp;
            i++;
            j--;
        }
    }
    return s;
}
