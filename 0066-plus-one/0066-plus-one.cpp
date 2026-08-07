class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<9){
                nums[i]=nums[i]+1;
                return nums;
            }
            else{
                nums[i]=0;
            }
        }
        nums.insert(nums.begin(), 1);
        return nums;
    }
};