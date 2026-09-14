class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        
        int maxi=0;
        int ans=1950;
        for(int year=1950;year<=2050;year++){
            int count=0;
            for(int i=0;i<logs.size();i++){
            
            if(logs[i][0]<=year && logs[i][1]>year)
            count++;
            }
            if(count > maxi){
                maxi=count;
                ans=year;
            }
        }
        return ans;
    }
};