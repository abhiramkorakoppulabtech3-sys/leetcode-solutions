class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> s;
        for(int i=0;i<words.size();i++){
            string name=words[i];
            for(int k=0;k<words[i].length();k++){
                 words[i][k] = tolower(words[i][k]);
            }
            int count1=0,count2=0,count3=0;
            for(int j=0;j<words[i].length();j++){
                if(words[i][j]=='q' ||words[i][j]=='w' ||words[i][j]=='e' ||words[i][j]=='r' ||words[i][j]=='t' ||words[i][j]=='y' ||words[i][j]=='u' ||words[i][j]=='i' ||words[i][j]=='o' ||words[i][j]=='p'){
                    count1++;
                }
                if(words[i][j]=='a' ||words[i][j]=='s' ||words[i][j]=='d' ||words[i][j]=='f' ||words[i][j]=='g' ||words[i][j]=='h' ||words[i][j]=='j' ||words[i][j]=='k' ||words[i][j]=='l'){
                    count2++;
                }
                if(words[i][j]=='z' ||words[i][j]=='x' ||words[i][j]=='c' ||words[i][j]=='v' ||words[i][j]=='b' ||words[i][j]=='n' ||words[i][j]=='m'){
                    count3++;
                }
            }
            if(count1==0 && count2==0 || count2==0&&count3==0 || count3==0&&count1==0){
                    s.push_back(name);
            }
        }
        return s;
    }
};