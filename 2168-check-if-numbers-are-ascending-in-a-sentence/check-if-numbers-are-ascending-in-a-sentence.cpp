class Solution {
public:
    bool areNumbersAscending(string s) {
        int count=0,num=0;
        for(int i=0;s[i]!='\0';i++){
            num++;
            if(isdigit(s[i])){
                while(isdigit(s[i])){
                    num++;
                    count=count*10+(s[i]-'0');
                    i++;
                }
                break;
            }
        }
        for(int i = num - 1;s[i]!='\0';i++){
            if(isdigit(s[i])){
                int res=0,k=0;
                while(isdigit(s[i])){
                    res=res*10+(s[i]-'0');
                    i++;
                }
                i--;
                 if(res<=count){
                    return 0;
                 }
                 else{
                   count=res;
                }
            }
        }
        return 1;
    }
};