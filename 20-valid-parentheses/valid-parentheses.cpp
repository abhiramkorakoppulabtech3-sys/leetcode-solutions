class Solution {
public:
    bool isValid(string s) {
           int i=0; 
        stack<char> stk;
        while(s[i]!='\0'){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                stk.push(s[i]);
            }
            else if(s[i]==')'){
                 if(stk.empty()){
                    return 0;
                }
                if( stk.top()=='('){
                    stk.pop();
                }
                else
                return 0;
            }
            else if(s[i]=='}'){
                 if(stk.empty()){
                    return 0;
                }
                if( stk.top()=='{'){
                    stk.pop();
                }
                else 
                return 0;
            }
            else if( s[i]==']'){
                if(stk.empty()){
                    return 0;
                }
                if(stk.top()=='['){
                    stk.pop();
                }
                else 
                return 0;
            }
            i++;

        }
        return stk.empty();
    }
};