class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int> box(46, 0);
        int ans = 0;

        for (int i = lowLimit; i <= highLimit; i++) {
            int sum = digitsum(i);
            box[sum]++;
            ans = max(ans, box[sum]);
        }

        return ans;
    }

    int digitsum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
};