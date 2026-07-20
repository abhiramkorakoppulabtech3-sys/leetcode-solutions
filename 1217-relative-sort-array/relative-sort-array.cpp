class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> s;
         vector<int> m;
        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<arr1.size();j++){
             if(arr2[i]==arr1[j]){
                 s.push_back(arr1[j]);
             }

                
            }
        }
        sort(arr1.begin(),arr1.end());
        for(int i=0;i<arr1.size();i++){
            if(isfound(s,arr1[i])){
                continue;
            }
            else{
                m.push_back(arr1[i]);
            }
        }
        for(int j=0;j<m.size();j++){
            s.push_back(m[j]);
        }
        return s;
        
    }
    bool isfound(vector<int> &s, int k){
        for(int i=0;i<s.size();i++){
            if(s[i]==k){
                return 1;
            }
        }
        return 0;
    }
};