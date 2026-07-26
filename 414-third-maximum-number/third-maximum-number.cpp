class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int> s=nums;
        int count=0;
        int result;
           while (!nums.empty()) {
            result = *max_element(nums.begin(), nums.end());
            nums.erase(remove(nums.begin(), nums.end(), result), nums.end());
                 count++;
           if (count == 3){
                return result;
        }
           }
           return *max_element(s.begin(), s.end());
    }
};