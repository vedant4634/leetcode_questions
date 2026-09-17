class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for(int i = 1; i <= s.length()/2; i++) {

            if(s.length() % i != 0) {
                continue;
            }

            bool valid = true;

            for(int j = 0; j < s.length(); j++) {
                if(s[j] != s[j % i]) {
                    valid = false;
                    break;
                }
            }

            if(valid) {
                return true;
            }
        }

        return false;
    }
};