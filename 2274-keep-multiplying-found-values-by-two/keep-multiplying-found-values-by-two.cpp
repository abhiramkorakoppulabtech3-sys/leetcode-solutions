class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int result=original;
       while(1){
        int count=0;
          for(int i=0;i<nums.size();i++){
            if(nums[i]==original){
                original*=2;
                result=original;
                count=1;
                break;
            }
          }
          if(count==0){
            break;
          }
       }
       return result;
    }
};