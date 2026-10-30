class Solution {
public:
    int minLength(string s) {
      int i=1;
          while(1){
            string str="";
             str+=s[i-1];
             str+=s[i];
             if(str=="AB" || str=="CD"){
                s.erase(i-1, 2);
                i=1;
                continue;
             }
            i=i+1;
             if(i>=s.length()){
                break;
             }
          }
        return s.length();
    }
};