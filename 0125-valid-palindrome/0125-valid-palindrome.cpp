class Solution {
public:
    bool isPalindrome(string s) {
        
        int a=0;
        int h =s.length()-1;
        while(a < h){
            
             while(a<h &&!isalnum(s[a])){
                a++;
            }
            while(a < h &&!isalnum(s[h])){
                h--;
            }
            if(tolower(s[a]) != tolower(s[h])){
                return false;
            }
            a++;
            h--;
        }
        return true;
    
    }
};