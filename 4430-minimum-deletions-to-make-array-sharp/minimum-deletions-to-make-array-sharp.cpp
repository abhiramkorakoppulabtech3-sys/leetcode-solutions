class Solution {
public:
    int minDeletions(vector<int>& nums) {
       vector<int> vec;
       vec.push_back(nums[0]);
       for(int i=1;i<nums.size();i++){
        if(nums[i-1]==nums[i]){
             continue;
           }
           else{
              vec.push_back(nums[i]);
           }
       }
       return nums.size()- vec.size(); 
    }
};