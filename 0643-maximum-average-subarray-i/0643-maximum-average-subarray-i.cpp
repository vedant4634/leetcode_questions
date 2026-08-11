class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max=-1e9;
        long long sum=0;
        for(int i=0;i<k;i++){
            sum=sum+nums[i];
        }
        max=(double)sum/k;
        for(int i=0;i<nums.size()-k;i++){
            sum=sum-nums[i];
            sum=sum+nums[i+k];
            
            double avg=(double)sum/k;
            if(max<avg){
                max=avg;
            }
        }
        return max;
    }
};