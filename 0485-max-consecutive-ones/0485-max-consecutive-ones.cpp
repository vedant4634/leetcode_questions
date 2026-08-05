class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int k=0;
        int maxi=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                k++;
            maxi=max(maxi,k);
                }
                else{
                    k=0;
                }

           
        }return maxi;
    }
    
};