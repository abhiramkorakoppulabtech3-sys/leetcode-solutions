class Solution {
public:
    int minimumDistance(vector<int>& nums) {
            int res=INT_MAX;
            for(int i=0;i<nums.size();i++){
                for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i]==nums[j] && nums[j]==nums[k]){
                        int dis= abs(i - j) + abs(j - k) + abs(k - i);
                         res=min(res,dis);
                    }
                    
                   }
                }
            }
            return res==INT_MAX?-1:res;
    }
};