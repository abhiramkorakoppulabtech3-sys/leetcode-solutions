class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> s;
        sort(nums.begin(),nums.end());
        for(int i=1;i<=nums.size();i=i+2){
                s.push_back(nums[i]);
                s.push_back(nums[i-1]);
            }
            return s;
        }
};