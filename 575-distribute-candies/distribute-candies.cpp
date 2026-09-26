class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        vector<int> s;
        for(int i=0;i<candyType.size();i++){
            if(isExists(s,candyType[i])){
                continue;
            }
            else{
                s.push_back(candyType[i]);
            }
        }
       if(candyType.size()/2<=s.size()){
             return candyType.size()/2;
       }
       else{
        return s.size();
       }
           
    }
    bool isExists(vector<int>& s,int k){
        for(int i=0;i<s.size();i++){
            if(s[i]==k){
                return 1;
            }
        }
         return 0;
    }
};