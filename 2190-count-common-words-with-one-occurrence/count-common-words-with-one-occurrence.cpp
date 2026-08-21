class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string, int> m1, m2;
        for (string word : words1) {
            m1[word]++;
        }
        for (string word : words2) {
            m2[word]++;
        }

        int count = 0;
        for (auto x : m1) {
            if (x.second == 1 && m2[x.first] == 1) {
                count++;
            }
        }

        return count;
    }
};