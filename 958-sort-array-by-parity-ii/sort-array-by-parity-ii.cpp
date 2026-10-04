class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> s1;
        vector<int> s2;
        vector<int> vec;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                s1.push_back(nums[i]);
            }
            else{
                s2.push_back(nums[i]);
            }
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
       for(int i=0;i<nums.size();i++){
        if(i%2==0){
            int ele=s1[s1.size()-1];
            s1.pop_back();
            vec.push_back(ele);
        }
        else{
            int ele=s2[s2.size()-1];
            s2.pop_back();
            vec.push_back(ele);
        }
       }
       return vec;
    }
};