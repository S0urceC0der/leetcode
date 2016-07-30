/*
 * =====================================================================================
 *
 *       Filename:  242.c
 *
 *    Description:  242. Valid Anagram
 *  问题的关键在于变形词的概念
 *
 * =====================================================================================
 */
#include <stdlib.h>

bool isAnagram(char* s, char* t) {
    int length = 0;
    int len_s = 0;
    int len_t = 0;
    int alpha[26];
    int i;
    for (i = 0; i < 26; i++)
        alpha[i] = 0;
    while (t[len_t] != '\0') {
        alpha[t[len_t] - 'a'] += 1;
        len_t++;
    }
    while (s[len_s] != '\0') {
        alpha[s[len_s] - 'a'] -= 1;
        len_s++;
    }
    if (len_s > len_t)
        length = len_t;
    else
        length = len_s;
    if (len_s != len_t)
        return false;
    for (i = 0; i < 26; i++)
        if (alpha[i] != 0)
            return false;
    return true;
}
