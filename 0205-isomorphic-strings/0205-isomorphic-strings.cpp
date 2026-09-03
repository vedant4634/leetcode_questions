class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp;
        set<char> used;

        for (int i = 0; i < s.length(); i++) {

            if (mp.find(s[i]) != mp.end()) {
                if (mp[s[i]] != t[i])
                    return false;
            }


            else {
                if (used.count(t[i]))
                    return false;

                mp[s[i]] = t[i];
                used.insert(t[i]);
            }
        }

        return true;
    }
};