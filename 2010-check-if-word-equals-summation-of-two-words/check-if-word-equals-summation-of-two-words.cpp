class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int count1=0,count2=0,count3=0;
        for(int i=0;firstWord[i]!='\0';i++){
            count1=count1*10+(firstWord[i]-97);
        }
         for(int i=0;secondWord[i]!='\0';i++){
            count2=count2*10+(secondWord[i]-97);
        }
        for(int i=0;targetWord[i]!='\0';i++){
            count3=count3*10+(targetWord[i]-97);
        }
       return(count3==count2+count1);
    }
};