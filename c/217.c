/*
 * =====================================================================================
 *
 *       Filename:  217.c
 *
 *    Description:  217. Contains Duplicate
 *    本文存在简单方法O(n)实现
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

int containsDuplicate0(int * nums, int numsSize) {
    int count = 1;
    int main = nums[0];
    int i = 0;
    for (i = 0; i < numsSize; i++) {
        if (count == 0) {
            main = nums[i];
            count = 1;
        } else {
            if (nums[i] == main)
                count++;
            else
                count--;
        }
    }
    return main;
}

bool containsDuplicat10(int* nums, int numsSize) {
    int i = 0;
    int j = 0;
    for (i = 0 ; i < numsSize; i++)
        for (j = i + 1; j < numsSize; j++)
            if (nums[i] == nums[j])
                return true;
    return false;
}


bool containsDuplicate(int* nums, int numsSize) {
    int bufSize = pow(2, sizeof(int)*8-3);
    char *buf =  (char*) malloc(bufSize);
    int i = 0;
    int index = 0;
    int move = 0;
    int nTemp = 0;
    bool zero = false;
    printf("buf: %d\n", bufSize);
    for (i = 0; i < bufSize; i++) {
        buf[i] = 0;
    }
    for (i = 0; i < numsSize; i++) {
        move = nums[i] % 8;
        index = nums[i] / 8;
        if ((buf[index] & (1 << move)) == 0)
            buf[index] = buf[index] | (1 << move);
        else {
            free(buf);
            return true;
        }
    }
    free(buf);
    return false;
}


int main() {
    int a[4] = {1, 2, 300, 300};
    int length = 4;
    printf("%ld\n", sizeof(int));
    if (containsDuplicate(a, length))
        printf("OK\n");
    else
        printf("Failed\n");
    return 0;
}
