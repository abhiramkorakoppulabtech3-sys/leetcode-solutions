class Solution {
public:
    int countEven(int num) {
        int count=0;
        for(int i=1;i<=num;i++){
            if(isValid(i)){
                count++;
            }
        }
        return count;
    }
    bool isValid(int k){
        int sum=0;
        while(k>0){
            sum+=k%10;
            k=k/10;
        }
        if(sum%2==0){
            return 1;
        }
        else{
            return 0;
        }
    }
};