class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int count=0,num=0;
        vector<int> s={0,0};
        vector<int> vec;
        for(int i=0;i<mat.size();i++){
            int fre=0;
            for(int j=0;j<mat[i].size();j++){
                   if(mat[i][j]==1){
                    fre++;
                   }
            }
            /* if(count==fre){
                num++;
                if(vec.size()==0){
              vec.push_back(i);
              vec.push_back(fre);
            }
            }
            if(count<fre){
                s[0]=i;
                count=fre;
                 s[1]=count;
            }
            */
            if(count < fre){
                s[0] = i;
                 count = fre;
                s[1] = fre;
             }
        }
        if(num==0){
            return s;
        }
       else{
            if(vec[1]<s[1]){
                return s;
            }
            else {
                return vec;
            }
       }
    }
};