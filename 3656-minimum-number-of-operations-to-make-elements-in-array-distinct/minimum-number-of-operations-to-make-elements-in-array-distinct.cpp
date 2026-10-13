class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        vector<int> vec=nums;
        int count=0;
        while(isValid(vec)){
                if(vec.size() < 3) {
                count++;
                break;
            }
            count++;
            vec.erase(vec.begin(),vec.begin()+3);
        }
        return count;
    }
    bool isValid(vector<int> s){
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                if(s[i]==s[j]){
                    return 1;
                }
            }
        }
        return 0;
    }
};