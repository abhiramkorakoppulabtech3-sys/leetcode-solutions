class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size();
        if (n == 1) return k == 0 ? 1 : 0;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == s[(i + 1) % n]) count++;
        }
        if (k == count - 1) return count;
        if (k == count) return n - count;
        return 0;
    }
};