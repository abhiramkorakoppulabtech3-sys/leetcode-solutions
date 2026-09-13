class Solution {
public:
    int scoreDifference(vector<int>& nums) {
      vector<int> s={0,0};
      int k=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]%2!=0){
            bool num=0;
           if(k==0){
            k=1;
            num=1;
           }
           if(!num){
             k=0;
           }
        }
        if((i+1)%6==0){
            bool num=0;
           if(k==0){
            k=1;
            num=1;
           }
           if(!num){
             k=0;
           }
        }
            s[k]+=nums[i];
       }
          return s[0]-s[1];
    }
  
};