class Solution {
public:
    int passwordStrength(string password) {
        int count=0;
        vector<char> s;
        for(int i=0;i<password.length();i++){
            if(!(isfound(s,password[i]))){
                s.push_back(password[i]);
                if(97<=password[i] && 122>=password[i] ){
                    count+=1;
                }
                else if(65<=password[i] && 90>=password[i]){
                    count+=2;
                }
                else if(48<=password[i] && 57>=password[i]){
                    count+=3;
                }
                else if(password[i]=='!' || password[i]=='@' || password[i]=='#' || password[i]=='$'){
                    count+=5;
                }
            }
        }
        return count;
    }
    bool isfound(vector<char>& s,char k){
        int count=0;
        for(int i=0;i<s.size();i++){
            if(k==s[i]){
                count=1;
            }
        }
        return count==1;
    }
};