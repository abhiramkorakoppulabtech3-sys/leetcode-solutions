class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        for(int i=0;i<distance.size();i++){
            int cmp=distance[i];
            int res=check(s,i);

            if(res==-1)
                continue;
            if(cmp!=res){
                return false;
            }
        }
        return true;
    }
    int check(string str,int index){
         char ch='a'+index;
         int num1=-1,num2=-1;
        for(int i=0;i<str.length();i++){
            if(str[i]==ch){
                if(num1==-1)
                    num1=i;
                else
                    num2=i;
            }
        }
        return num2-num1-1;    
    }
};