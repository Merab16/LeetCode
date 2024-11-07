#pragma once
#include <string>
#include <stack>


class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;

        for (size_t i = 0; i < s.size(); ++i) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            else {
                if ((s[i] == ')' && st.top() == '(') || 
                    (s[i] == ']' && st.top() == '[') ||
                    (s[i] == '}' && st.top() == '{')) {
                    st.pop();
                }
                else
                    return false;
            }
        }
        return st.empty();
    }
};

