class Solution {
public:
    int numberOfSpecialChars(string word) {
    int specialCount = 0;

    for (char letter = 'A'; letter <= 'Z'; letter++) {
        bool hasUppercase = false;
        bool hasLowercase = false;

        for (char ch : word) {
            if (ch == letter) {
                hasUppercase = true;
            }

            if (ch == letter + 32) {
                hasLowercase = true;
            }
        }

        if (hasUppercase && hasLowercase) {
            specialCount++;
        }
    }

    return specialCount;
    }
};