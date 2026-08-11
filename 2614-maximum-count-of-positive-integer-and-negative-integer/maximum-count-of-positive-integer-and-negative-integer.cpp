class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int count1=0,count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                count1++;
            }
            if(nums[i]<0){
                count2++;
            }
        }
        return ((count1>=count2)?count1:count2);
    }
};