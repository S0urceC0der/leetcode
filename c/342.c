/*
 * =====================================================================================
 *
 *       Filename:  342.c
 *
 *    Description:  342. Power of Four
 *
 * =====================================================================================
 */
#include <stdlib.h>

bool isPowerOfFour0(int num) {
    /* 
     * 4^n的特点：
     * a. 只有一个1，利用(num & (num - 1)) == 0判断。
     * b. 2^2n满足(2^2n - 1) % 3 == 0，因为 (2^2n - 1) = (2^n + 1)(2^n -1) ，显然在2^n、2^n +1、2^n-1中必然有一个能够被3整除，且必不为2^n。
     * c. 2^(2n-1) % 3 != 0，因为2 * (2^(2n-1) - 1) = 2^2n -2，既然2^2n -1必然被3整除，那么2^2n - 2必然不能被3整除
     */
    return num > 0 && (num & (num - 1)) == 0 && ((num - 1) % 3) == 0;
}


bool isPowerOfFour(int num) {
    while (num >= 4 && num % 4 == 0)
        num = num >> 2;
    if (num == 1)
        return true;
    else
        return false;
}
