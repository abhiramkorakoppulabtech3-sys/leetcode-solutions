class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int> s;
        for(int i=0;i<bulbs.size();i++){
              if(isExists(s,bulbs[i])){
                  int index=indexOfEle(s,bulbs[i]);
                  s.erase(s.begin()+index);
              }
              else{
                s.push_back(bulbs[i]);
              }
        }
        sort(s.begin(),s.end());
        return s;
    }
    bool isExists(vector<int> s, int k){
        for(int i=0;i<s.size();i++){
            if(k==s[i]){
                return 1;
            }
        }
        return 0;
    }
    int indexOfEle(vector<int> s,int k){
        for(int i=0;i<s.size();i++){
            if(s[i]==k){
                return i;
            }
        }
        return 0;
    }
};