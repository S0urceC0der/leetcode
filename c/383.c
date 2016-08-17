/*
 * =====================================================================================
 *
 *       Filename:  383.c
 *
 *    Description:  383. Ransom Note
 *
 * =====================================================================================
 */
#include <stdlib.h>

bool canConstruct(char* ransomNote, char* magazine) {
    int count[26];
    int i = 0;
    for (i = 0; i < 26; i++)
        count[i] = 0;
    i = 0;
    while (magazine[i] != '\0')
        count[magazine[i++] - 'a'] += 1;
    i = 0;
    while (ransomNote[i] != '\0')
    {
        count[ransomNote[i] - 'a'] -= 1;
        if (count[ransomNote[i] - 'a'] < 0)
            return false;
        i++;
    }
    return true;
}
