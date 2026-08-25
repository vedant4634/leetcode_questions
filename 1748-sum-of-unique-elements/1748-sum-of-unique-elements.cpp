class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int ,int>a;
        int sum=0;
        for(int i=0;i<nums.size();i++){
          a[nums[i]]++;
        }
        for(auto p:a){
            if(p.second==1){
                sum+=p.first;
            }
        }
        return sum;
    }
};