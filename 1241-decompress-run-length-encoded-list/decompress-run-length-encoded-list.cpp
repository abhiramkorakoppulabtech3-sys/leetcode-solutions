class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> s;
        for(int i=0;i<nums.size()-1;i=i+2){
            int a=nums[i];
            int val=nums[i+1];
            while(a>0){
                s.push_back(val);
                a--;
            }
        }
        return s;
    }
};