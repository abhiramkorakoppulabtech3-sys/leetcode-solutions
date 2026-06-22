class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int sum=0;
        int digit=0,newnum=0,num=n;
        while(n>0){
            digit=n%10;
            newnum=newnum*10+digit;
            n=n/10;
        }
        if(num>newnum){
            for(int i=newnum;i<=num;i++){
                if(isprime(i)){
                    sum+=i;
                }
            }
        }
        else{
             for(int i=num;i<=newnum;i++){
                if(isprime(i)){
                    sum+=i;
                }
            }
        }

        return sum;
    }
    bool isprime(int m){
        int count=0;
        for(int i=1;i<=m;i++){
            if(m%i==0){
                count++;
            }
        }
        if(count==2){
            return true;
        }
        else{
            return false;
        }
    }
};