/**
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.

Example 1:

Input: "()"
Output: true
Example 2:

Input: "()[]{}"
Output: true
Example 3:

Input: "(]"
Output: false
**/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if (st.empty())
                    return false;
                char open_c = st.top();
                st.pop();
                if (!((s[i] == ')' && open_c == '(') || (s[i] == '}' && open_c == '{') || (s[i] == ']' && open_c == '[')))
                    return false;
            }
            else
                st.push(s[i]);
        }
        return st.empty();
    }
};
