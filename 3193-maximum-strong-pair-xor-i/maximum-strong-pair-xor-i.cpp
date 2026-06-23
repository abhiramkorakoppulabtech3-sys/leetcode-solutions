class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        vector<int> s;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i==j){
                    continue;
                }
                if(abs(nums[i]-nums[j])<=min(nums[i],nums[j])){
                    s.push_back(nums[i]^nums[j]);
                }
            }
        }
        int k=0;
        for(int i=0;i<s.size();i++){
            if(k<s[i]){
                k=s[i];
            }
        }
        return k;
        
    }
    int min(int a,int b){
        if(a>b){
            return b;
        }
        else{
            return a;
        }
    }
};