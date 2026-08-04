class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
                if(nums[i]==nums[i+1]){
                    nums[i]*=2;
                    nums[i+1]=0;
                }
        }
        vector<int> s;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                s.push_back(nums[i]);
                count++;
            }
        }
        for(int i=count;i<nums.size();i++){
            s.push_back(0);
        }
        return s;
    }
};