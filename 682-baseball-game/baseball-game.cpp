class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> s;
        int count=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i][0]=='+')
            {
                int k=s.size();
                s.push_back(s[k-1]+s[k-2]);
            }
            else if(operations[i][0]=='D'){
                 int k=s.size();
                s.push_back(s[k-1]*2);
            }
           else if(operations[i][0]=='C'){
                s.pop_back();
            }
            else{
             int number = stoi(operations[i]);
                s.push_back(number);
            }
        }
        for(int i=0;i<s.size();i++){
            count+=s[i];
        }
        return count;
    }
};