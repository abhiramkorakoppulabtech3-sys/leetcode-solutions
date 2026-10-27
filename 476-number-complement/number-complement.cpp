class Solution {
public:
    int findComplement(int num) {
        string res=toBinary(num);
         return validate(res);
    }
    string toBinary(int num){
        string str="";
        while(num>1){
            if(num%2!=0){
                str.push_back('1');
            }
            else{
                str.push_back('0');
            }
            num/=2;
        }
        if(num==1){
            str.push_back('1');
        }
        reverse(str.begin(),str.end());
        return str;
    }
    int validate(string str){
        int res=0;
        for(int i=str.length()-1;i>=0;i--){
            if(str[i]=='1'){
                continue;
            }
            else{
                res+=pow(2,str.length()-1-i);
            }
        }
        return res;
    }
};