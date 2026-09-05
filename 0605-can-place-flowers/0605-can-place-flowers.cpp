class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
       int  m=flowerbed.size();
        if(m<2){
            if(flowerbed[0]==0){
                return true;
            }
        }
      for(int i=0;i<flowerbed.size();i++){
        if(flowerbed[i]==0){
            if(i==0){
                if(flowerbed[i+1]==0){
                    flowerbed[i]=1;
                   count++;
                }
            }
            else if(i==flowerbed.size()-1){
                if(flowerbed[i-1]==0){
                    flowerbed[i]=1;
                     count++;
                }
            }
            else if(flowerbed[i-1]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                count++;
            }
        }
       
      }   
      if(count>=n){
      return true;
      }   
      return false;
    }
};