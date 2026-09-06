class Solution {
public:
    int smallestNumber(int n, int t) {
        while(1){
            int num=n;
            int prop=1;
            while(num!=0){
                prop*=(num%10);
                 num=num/10;
            }
            if(prop%t==0){
                return n;
            }
            n++;

        }
        return 0;
    }
};