class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int a=0,b=nums[i],digit=0,place=0;
            while(b>0){
                digit=b%10;
                if(digit>a){
                    a=digit;
                }
                place++;
                b=b/10;
            }
            count+=value(a,place);
        }
        return count;
    }

    int value(int a,int place){
        int num=0;
        for(int i=1;i<=place;i++){
            num=num*10+a;
        }
        return num;
    }
};