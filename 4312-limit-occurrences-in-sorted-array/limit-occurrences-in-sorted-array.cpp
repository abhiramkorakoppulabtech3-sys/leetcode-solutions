class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> s;
        for(int i=0;i<nums.size();i++){
            if(exists(s,nums[i],k)){
                continue;
            }
            s.push_back(nums[i]);
        }
        sort(s.begin(),s.end());
        return s;
    }
    bool exists(vector<int>& s,int ele,int k){
        int count=0;
        for(int i=0;i<s.size();i++){
             if(s[i]==ele){
                count++;
            }
            if(count==k){
                return 1;
            } 
        }
        return 0;
    }
};