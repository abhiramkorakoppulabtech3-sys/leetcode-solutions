class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string res="";
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                res.push_back(s[i]);
                count++;
            }
            else if(s[i]==')'){
               if(count>0){
                res.push_back(s[i]);
                count--;
               }
               else{
                continue;
               }
            }
            else{
                res.push_back(s[i]);
            }
        }
         while (count > 0) {
            for (int i = res.length() - 1; i >= 0; i--) {
                if (res[i] == '(') {
                    res.erase(i, 1);
                    count--;
                    break;
                }
            }
        }
        return res;
    }
};
  