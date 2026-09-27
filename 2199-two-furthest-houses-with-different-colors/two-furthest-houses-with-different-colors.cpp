class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int count=-999999999;
        for(int i=0;i<colors.size();i++){
            for(int j=i+1;j<colors.size();j++){
                if(colors[i]==colors[j]){
                    continue;
                }
                if(abs(i-j)>count){
                    count=abs(i-j);
                }
            }
        }
        return count;
    }
};