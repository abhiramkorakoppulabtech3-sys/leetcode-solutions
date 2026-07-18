class Solution {
public:
    int countAsterisks(string s) {
        int count = 0, i = 0;
    int inside = 0;   // added to track | sections

    while (s[i] != '\0') {   // fixed condition
        if (s[i] == '|') {
            inside = !inside;   // toggle state
        }
        else if (s[i] == '*' && inside == 0) {  // fixed logic
            count++;
        }
        i++;
    }

    return count;   
    }
};