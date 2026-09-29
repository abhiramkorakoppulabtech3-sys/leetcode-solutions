class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> s1;
        int num1 = k;
        while(num1 > 0) {
            s1.push_back(num1 % 10);
            num1 /= 10;
        }
        reverse(s1.begin(), s1.end());
        vector<int> res;
        int i = num.size() - 1;
        int j = s1.size() - 1;
        int carry = 0;
        while(i >= 0 || j >= 0 || carry) {
            int number = carry;
            if(i >= 0) {
                number += num[i];
                i--;
            }
            if(j >= 0) {
                number += s1[j];
                j--;
            }
            res.push_back(number % 10);
            carry = number / 10;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};