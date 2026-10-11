class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> s;
        for(int i=0;i<=n;i++){
           int num=Bits(i);
           s.push_back(num); 
        }
        return s;
    }
    int Bits(int k){
        int count=0;
        while(k>1){
            if(k%2!=0){
                count++;
            }
            k=k/2;
        }
        if(k==1){
            count++;
        }
        return count;
    }
};