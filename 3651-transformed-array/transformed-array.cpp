class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
       vector<int> result;
       for(int i=0;i<nums.size();i++){
          result.push_back(0);
       }
       for(int i=0;i<nums.size();i++){
           if(nums[i]>0){
            int k=i+nums[i];
            k%=nums.size();
              result[i]=nums[k];
           }
           else if(nums[i]<0){
               int k=i-abs(nums[i]);
               while(k<0){
                k=nums.size()-abs(k);
               }
               result[i]=nums[k];
           }
           else if(nums[i]==0){
            result[i]=nums[i];
           }
       }
       return result;
    }
};