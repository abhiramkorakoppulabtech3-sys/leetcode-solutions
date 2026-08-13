class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int i=0;
        while(nums.size()){
             int count=*max_element(nums.begin(),nums.end());
             for(int i=0;i<nums.size();i++){
                if(nums[i]==-1*count){
                    return count;
                }
             }
             nums.erase(max_element(nums.begin(),nums.end()));
        }
        return -1;
    }
};