class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int count=0;
        int place=0;
        for(int i=0;i<nums.size();i++){
              place+=nums[i];
              if(place==0){
                count++;
              }
        }
        return count;
    }
};