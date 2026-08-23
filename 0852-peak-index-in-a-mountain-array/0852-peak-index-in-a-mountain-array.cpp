class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low =0;
         int mid;
        int high = arr.size()-1;
        while(low<high){
             mid =(low+high)/2;
            if(arr[mid]>arr[mid+1]){
                high =mid;
            }
            else if(arr[mid]<arr[mid+1]){
               low=mid+1;
            }
        }
        return low;
    }
};