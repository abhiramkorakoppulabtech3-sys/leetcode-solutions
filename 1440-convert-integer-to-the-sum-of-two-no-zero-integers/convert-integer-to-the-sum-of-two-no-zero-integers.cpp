class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> s;
        int count=0;
        for(int i=1;i<=n;i++){
            if(exists(i))
               continue;
          //  vector<int> m;
            for(int j=i;j<=n;j++){
                if(exists(j)){
                      continue; 
                }
              if(i+j==n){
                s.push_back(i);
                s.push_back(j);
                count++;
                break;
               // s.push_back(m);
              }
               
            }
            if(count==1){
                break;
              }
        }
        return s;
    }
    bool exists(int k){
        while(k>0){
            if(k%10==0)
            return 1;
            k=k/10;
        }
         return 0;
    }
};