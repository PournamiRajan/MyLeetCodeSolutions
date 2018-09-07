/**
Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21

Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1].
For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
**/

class Solution {
public:
    int reverse(int x) {
        int sign, rem;
        long revx;
        
        revx = 0;
        sign = 1;
        if (x < 0)
        {
            if (x == INT_MIN)
                return 0;
            sign = -1;
            x = -x;
        }
        while (x)
        {
            rem = x % 10;
            revx = revx * 10 + rem;
            if (revx > INT_MAX)
                return 0;
            x /= 10;
        }
        return sign * revx;
    }
};
