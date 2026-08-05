class Solution {
public:
    int mySqrt(int x) {
        int low=0;
        long long high=x;
        int m;
        long long mid;
        while(low<=high){
            mid = low+(high-low)/2;
            
            if(mid *mid== x){
                return mid;
            }
            else if(mid *mid <x){
                m=mid;
                low =mid+1;
               
            }
            else{
                high =mid-1;
            }
        }
        return m;
    }
};