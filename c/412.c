/*
 * =====================================================================================
 *
 *       Filename:  412.c
 *
 *    Description:  412. Fizz Buzz
 *
 *        Version:  1.0
 *        Created:  2016/11/09 22时03分45秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char ** fizzBuzz(int n, int * returnSize) {
    char * fizz = "Fizz";
    char * buzz = "Buzz";
    char * fizzbuzz = "FizzBuzz";
    if (n <= 0) {
        *returnSize = 0;
        return NULL;
    }
    char ** result = (char **) malloc(n * sizeof(char *));
    char * str;
    int i;
    int length;
    printf("%s\n", fizz);
    *returnSize = n;
    for (i = 0; i < n; i++) {
        if ((i + 1) % 15 == 0) 
            str = fizzbuzz;
        else if ((i + 1) % 5 == 0)
            str = buzz;
        else if ((i + 1) % 3 == 0)
            str = fizz;
        else {
            length = 10;
            result[i] = (char *) malloc(10 * sizeof(char));
            sprintf(result[i], "%d", i+1);
            continue;
        }
        result[i] = (char *) malloc(strlen(str) * sizeof(char));
        strcpy(result[i], str);
    }
    return result;
}


int main() {
    int count, i;
    char ** result = fizzBuzz(15, &count);
    for (i = 0; i < count; i++)
        printf("%s\n", result[i]);
    return 0;
}
