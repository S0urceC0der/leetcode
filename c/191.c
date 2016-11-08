/*
 * =====================================================================================
 *
 *       Filename:  191.c
 *
 *    Description:  191. Number of 1 Bits
 *
 *        Version:  1.0
 *        Created:  2016/11/08 22时32分33秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>

int hammingWeight(uint32_t n) {
    int result = 0;
    while (n != 0) {
        if (n % 2 == 1)
            result++;
        n = n / 2;
    }
    return result;
}
