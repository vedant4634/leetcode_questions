class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int m=1;
        int count=0;
       while(count<k){
        bool found=false;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==m){
                found =true;
                break;
            }
            }
            if(!found){
                count++;
            }
        
            if(count==k){
               break;
            }
            m++;
        }
        return m++;
    }
};