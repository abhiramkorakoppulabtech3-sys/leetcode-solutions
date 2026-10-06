class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> s;
        int n=1<<nums.size();
        int siz=nums.size();
        for(int i=0;i<n;i++){
            vector<int> sub;
            for(int j=0;j<siz;j++){
                if(i&(1<<j)){
                    sub.push_back(nums[j]);
                }
            }
            s.push_back(sub);
        }
        return s;
    }
};