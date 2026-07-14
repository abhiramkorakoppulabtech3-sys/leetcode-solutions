class Solution {
public:
    int findLucky(vector<int>& arr) {
          int num=-1;
        for(int i=0;i<arr.size();i++){
           // int a=arr[i];
            int count=1;
            for(int j=0;j<arr.size();j++){
                if(i==j){
                    continue;
                }
                if(arr[j]==arr[i]){
                    count++;
                }
            }
            if(count==arr[i]){
                if(count>num)
                num=count;
            }
        }
        return num;
        
    }
};