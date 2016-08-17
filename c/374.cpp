/*
 * =====================================================================================
 *
 *       Filename:  374.cpp
 *
 *    Description:  374. Guess Number Higher or Lower
 *
 * =====================================================================================
 */
#include <stdlib.h>
nt guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int start = 1;
        int end = n;
        int guess_num;
        int result;
        do {
            guess_num = (end - start) / 2 + start;
            result = guess(guess_num);
            if (result == 0)
                return guess_num;
            if (result == 1) {
                start = guess_num + 1;
            }
            if (result == -1) 
                end = guess_num - 1;
        }while (true);
    }
};
