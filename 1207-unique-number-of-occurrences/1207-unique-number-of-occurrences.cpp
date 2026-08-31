class Solution {
public:
    bool uniqueOccurrences(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        set<int>st;
        for(auto p:mp){
            if(st.count(p.second) ){
                return false;
            }
            st.insert(p.second);
        }
        return true;
    }
};