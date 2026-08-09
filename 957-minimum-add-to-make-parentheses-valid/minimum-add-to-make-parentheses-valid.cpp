class Solution {
public:
    int minAddToMakeValid(string s) {
    int count=0;
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        if(st.empty() && s[i]==')'){
             count++;
             continue;
        }
        if(s[i]==')'){
            st.pop();
        }
    }
    return st.size()+count;
    }
};