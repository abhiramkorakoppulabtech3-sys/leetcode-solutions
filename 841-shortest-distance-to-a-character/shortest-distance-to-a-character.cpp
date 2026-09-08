class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> vec;
       for(int i=0;i<s.length();i++){
            int left = 99999999;
            int right = 99999999;
            for (int j = i - 1; j >= 0; j--) {
                if (s[j] == c) {
                    left = i - j;
                    break;
                }
            }
            for (int j = i; j < s.length(); j++) {
                if (s[j] == c) {
                    right = j - i;
                    break;
                }
            }
            vec.push_back(min(left, right));
        }
        return vec;
    }
};