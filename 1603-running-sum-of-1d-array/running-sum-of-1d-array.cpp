class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> s;
        for(int i=0;i<nums.size();i++){
            int a=i;
            int count=0;
            while(a>=0){
             count+=nums[a];
             a--;
            }
            s.push_back(count);
        }
        return s;
        
    }
};