class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minx = INT_MAX;
        int minin;
        int n=nums.size();
        int maxin;
        int maxx = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxx){
                maxx=nums[i];
                maxin=i;
            }
            if(nums[i]<minx){
                minx=nums[i];
                minin=i;
            }
        }
        int left = max (minin,maxin)+1;
        int right =n- min(minin,maxin);
        int oneleft = minin + 1 + (n - maxin);
        int oneright =maxin + 1 + (n - minin);
        return min(left,min(right,min(oneleft,oneright)));
    }
};