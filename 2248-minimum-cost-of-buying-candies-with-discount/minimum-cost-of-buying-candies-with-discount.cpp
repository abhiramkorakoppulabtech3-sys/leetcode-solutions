class Solution {
public:
    int minimumCost(vector<int>& cost) {
        vector<int> s=cost;
        int count=0;
        sort(s.begin(),s.end());
       // reverse(s.begin(),s.end());
        int siz=s.size()-1;
        if(siz==0){
             return s[0];
        }
        while(siz>=0){
            if(siz>=2){
                count+=s[siz]+s[siz-1];
                siz=siz-3;
            }
            else if(siz==1){
                count+=s[siz-1]+s[siz];
                siz=siz-2;
            }
            else if(siz==0){
                count+=s[siz];
                siz--;
            }

        }
        return count;
    }
};