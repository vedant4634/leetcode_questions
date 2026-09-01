class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>mp;
        map<char,int>mpp;
        for(int i=0;i<magazine.length();i++){
            mpp[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.length();i++){
        mp[ransomNote[i]]++;
   
        }
        for(auto p : mp){
            for(auto q : mpp){
                if(p.second > mpp[p.first]){
                    return false;
                }
            }
        }
        return true;
    }
};