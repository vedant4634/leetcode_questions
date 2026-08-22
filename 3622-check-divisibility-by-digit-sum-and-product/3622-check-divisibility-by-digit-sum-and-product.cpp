class Solution {
public:
    bool checkDivisibility(int n) {
        int m=n;
        int sum=0;
        int mul=1; 
        while(n!=0){
            int d = n%10;
            sum += d;
            mul *=d;
            n=n/10;
        }
        int total =sum+mul;
        if(m%total==0){
            return true;
        }
        return false;
    }
};