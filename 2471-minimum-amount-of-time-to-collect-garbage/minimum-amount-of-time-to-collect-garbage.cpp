class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int time1=0;
        int count1=0;
        for(int i=0;i<garbage.size();i++){
            for(int j=0;garbage[i][j]!='\0';j++){
                if(garbage[i][j]=='G'){
                    time1=i;
                    count1++;
                }
            }
            
        }
        for(int i=0;i<time1;i++){
            count1+=travel[i];
        }
        int time2=0;
        int count2=0;
        for(int i=0;i<garbage.size();i++){
            for(int j=0;garbage[i][j]!='\0';j++){
                if(garbage[i][j]=='M'){
                    time2=i;
                    count2++;
                }
            }
            
        }
        for(int i=0;i<time2;i++){
            count2+=travel[i];
        }
        int time3=0;
        int count3=0;
        for(int i=0;i<garbage.size();i++){
            for(int j=0;garbage[i][j]!='\0';j++){
                if(garbage[i][j]=='P'){
                    time3=i;
                    count3++;
                }
            }
            
        }
        for(int i=0;i<time3;i++){
            count1+=travel[i];
        }
        return count1+count2+count3;
        
    }
};