class Solution {
public:
    string greatestLetter(string s) {
        vector<char> str;
        string text;
       for(int i=0;s[i]!='\0';i++){
            for(int j=0;s[j]!='\0';j++){
                if(i==j){
                    continue;
                }
                if(abs(s[i]-s[j])==32){
                    if(s[i]<s[j]){
                       str.push_back(s[i]);
                    }
                    else{
                     str.push_back(s[j]);
                   }
                }
            }
       }
       sort(str.begin(),str.end());
       if(str.size()==0){
        return "";
       }
       text.push_back(str[str.size()-1]);
       return text;
   }
};