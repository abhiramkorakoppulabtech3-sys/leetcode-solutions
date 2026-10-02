class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
      // int count=0;
       vector<int> s;
       for(int i=0;i<nums.size();i++){
           if(nums[i]%k==0){
            s.push_back(nums[i]);
           }
       } 
       sort(s.begin(),s.end());
       int num=k;
       int mum=2;
       while(1){
             if(fun(s,num)){
                 num=k*mum++;
                 continue;
             }
             return num;
       }
      // return num;
    }
    bool fun(vector<int>& s, int num){
        for(int i=0;i<s.size();i++){
            if(s[i]==num){
                return 1;
            }
        }
        return 0;
    }
};