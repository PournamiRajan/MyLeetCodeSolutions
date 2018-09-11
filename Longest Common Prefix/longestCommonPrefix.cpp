/**
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
Note:

All given inputs are in lowercase letters a-z.
**/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result;
        int k = 0;
        
        if (!strs.size())
            return result;
        for (int i = 0; i < strs[k].length(); i++)
        {
            char s = strs[k][i];
            for (int j = 0; j < strs.size(); j++)
            {
                if (strs[j][i] != s)
                    return result;
            }
            result += s;
        }
        return result;
    }
};
