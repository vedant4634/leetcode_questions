class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
       
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
            for(int j=i;j<nums.size();j++){
                if(mini>=nums[j]){
                    mini=nums[j];
                }
            }

            if(maxi-mini<=k){
                return i;
            }
             mini = INT_MAX;
        }
        return -1;
    }
};