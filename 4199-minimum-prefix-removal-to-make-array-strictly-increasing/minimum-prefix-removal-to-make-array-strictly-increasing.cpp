class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int count=0;
    //    nums.sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]  || nums[i-1]>nums[i]){
                count=i;
            }
        }
        return count;
    }
};