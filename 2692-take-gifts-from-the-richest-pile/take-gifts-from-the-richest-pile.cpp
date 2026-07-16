class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
       long long count = 0;

        vector<long long> s(gifts.begin(), gifts.end());
        for (int i = 0; i < k; i++) {
            isbig(s);
        }

        for (int i = 0; i < s.size(); i++) {
            count += s[i];
        }

        return count;
    }

    void isbig(vector<long long> &gifts) {
        long long mx = gifts[0];
        int idx = 0;

        for (int i = 1; i < gifts.size(); i++) {
            if (mx < gifts[i]) {
                mx = gifts[i];
                idx = i;
            }
        }

        gifts[idx] = sqrt(mx);
    }
};