/*
 * =====================================================================================
 *
 *       Filename:  388.c
 *
 *    Description: 338. Counting Bits 
 *
 *        Version:  1.0
 *        Created:  2016/11/08 21时48分28秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
int* countBits(int num, int* returnSize)
{
    int i;
    int * result = (int *) malloc((num + 1) * sizeof(int));
    if (num >= 0)
    {
        result[0] = 0;
        *returnSize = num + 1;
    }
    else 
    {
        *returnSize = 0;
        return NULL;
    }
    if (num >= 1)
        result[1] = 1;
    if (num >= 2)
        result[2] = 1;
    for (i = 3; i <= num; i++)
        if (i % 2 == 1)
            result[i] = result[i - 1] + 1;
        else
            result[i] = result[(i + 1) / 2];
    return result;
}
