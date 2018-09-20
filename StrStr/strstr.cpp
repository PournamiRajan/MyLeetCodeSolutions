/**
Implement strStr().
Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Example 1:

Input: haystack = "hello", needle = "ll"
Output: 2

Example 2:

Input: haystack = "aaaaa", needle = "bba"
Output: -1
**/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int nl = needle.length(), hl = haystack.length();
        if (nl > hl)
            return -1;
        if (nl == 0)
            return 0;
        int i, j, k;
        for (i = 0; i <= hl - nl; i++)
        {
            j = 0;
            if (haystack[i] == needle[j])
            {
                k = i;
                while (j < nl)
                {
                    if (haystack[k] != needle[j])
                        break;
                    k++;
                    j++;
                }
                if (j == nl)
                    return i;
            }
        }
        return -1;
    }
};
