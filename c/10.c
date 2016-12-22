/*
 * =====================================================================================
 *
 *       Filename:  10.c
 *
 *    Description:  10. Regular Expression Matching
 *
 * =====================================================================================
 */
#include <stdio.h>

typedef int bool;
#define true 1
#define false 0

bool isMatch(char* s, char* p);

bool starMatch(char ch, char* s, char* p) {
    bool status = false;
    printf("star cmp %c <=> %c \n", s[0], p[0]);
    do {
        status = isMatch(s, p);
        if (status)
            return true;
        if (ch != '.' && ch != *s)
            return status;
    } while(*++s != '\0');
    if (p[0] != '\0')
        return false;
    else
        return true;
}

bool isMatch(char* s, char* p) {
    printf("cmp %c <=> %c \n", s[0], p[0]);
    if (s == NULL && p == NULL)
        return true;
    if (s == NULL || p == NULL)
        return false;
    if (p[0] == '\0' && s[0] == '\0')
        return true;
    if (p[0] == '\0' && s[0] != '\0')
        return false;
    if (p[1] == '*')
        return starMatch(*p, s, p+2);
    if (p[0] == '.' || p[0] == s[0])
        return isMatch(++s, ++p);
    return false;
}


int main(){
    if (isMatch("a", ".*..a*"))
        printf("true\n");
    else
        printf("false\n");
    return 0;
}
