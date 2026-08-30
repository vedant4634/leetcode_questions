class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp;
        map<char,int>mpp;
        if(s.length() != t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            mpp[t[i]]++;
        }
        if(mp==mpp){
            return true;
        }
        return false;
    }
};