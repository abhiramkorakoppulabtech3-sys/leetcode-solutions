class Solution {
public:
    string convertDateToBinary(string date) {
        string result="";
        string sub="";
        for(int i=date.length()-1;i>=0;i--){
            if(date[i]=='-'){
                reverse(sub.begin(),sub.end());
                string res=toBinary(sub);
                sub="";
                /*while(res.length()!=0){
                    char ch=res[res.length()-1];
                    result.insert(0,ch);
                    res.pop_back();
                }
                */
                result.insert(0,res);
                if(i!=0){
                result.insert(0, "-");
                }  
            }
            else{
                    sub.push_back(date[i]);
            }
        }
        reverse(sub.begin(),sub.end());
        string res=toBinary(sub);
        result.insert(0,res);
        return result;
    }
    string toBinary(string str){
        int num=stoi(str);
        string res="";
        while(num>1){
            if(num%2!=0){
                res.push_back('1');
            }
            else{
                res.push_back('0');
            }
            num/=2;
        }
        if(num==1){
            res.push_back('1');
        }
        reverse(res.begin(),res.end());
        return res;
    }
};