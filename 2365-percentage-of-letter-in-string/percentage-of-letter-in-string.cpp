class Solution {
public:
    int percentageLetter(string s, char letter) {
        int num=0,len=s.length();
        for(int i=0;s[i]!='\0';i++){
            if(s[i]==letter){
                num++;
            }
        }
       // double result=(num*100.0)/len;
        return (num*100)/len;
        
    }
};