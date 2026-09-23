class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string one;
        string two;
        for(int i=0;s[i]!='\0';i++){
            if(s[i]=='#'){
                if(one.length()==0){
                    continue;
                }
                one.pop_back();
            }
            else{
                one.push_back(s[i]);
            }
        }
        for(int i=0;t[i]!='\0';i++){
            if(t[i]=='#'){
                if(two.length()==0){
                    continue;
                }
                two.pop_back();
            }
            else{
                two.push_back(t[i]);
            }
    }
    
     return one==two;
    }
};