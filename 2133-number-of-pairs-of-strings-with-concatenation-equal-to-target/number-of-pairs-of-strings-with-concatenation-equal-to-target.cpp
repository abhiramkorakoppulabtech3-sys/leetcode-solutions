class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        string given;
        int count=0;
        for(int i=0;i<nums.size();i++){
            given=nums[i];
            for(int j=0;j<nums.size();j++){
                if(i==j){
                    continue;
                }
                
            if((nums[i]+nums[j])==target){
                    count++;
                }
            }
        }
        return count;
    }
};