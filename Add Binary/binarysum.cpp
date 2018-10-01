/**
Given two binary strings, return their sum (also a binary string).
The input strings are both non-empty and contains only characters 1 or 0.

Example 1:
Input: a = "11", b = "1"
Output: "100"

Example 2:
Input: a = "1010", b = "1011"
Output: "10101"
**/

class Solution {
public:
    string addBinary(string a, string b) {
        int i, j, carry = 0, sum = 0;
        string res = "";
        i = a.length()-1;
        j = b.length()-1;
        while (i >= 0 && j >= 0)
        {
            sum = (a[i--] - '0') + (b[j--] - '0') + carry; 
            carry = (sum > 1)? 1: 0;
            res += (sum %2 ) + '0';
        }
        while (i >= 0)
        {
            sum = (a[i--] - '0') + carry;
            carry = (sum > 1)? 1: 0;
            res += (sum %2 ) + '0';
        }
        while (j >= 0)
        {
            sum = (b[j--] - '0') + carry;
            carry = (sum > 1)? 1: 0;
            res += (sum %2 ) + '0';
        }
        if (carry)
            res += carry + '0';
        reverse(res.begin(), res.end());
        return res;
        
    }
};
