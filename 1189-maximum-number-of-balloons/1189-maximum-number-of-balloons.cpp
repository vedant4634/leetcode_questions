class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int oc=0,lc=0,nc=0,ac=0,bc=0,a,b,l,o,n;
        for(int i=0;i<text.length();i++){
            if(text[i]=='b'){
                bc++;
            }
            else if(text[i]=='a'){
                ac++;
            }
            else if(text[i]=='l'){
                lc++;
            }
            else if(text[i]=='o'){
                oc++;
            }
            else if(text[i]=='n'){
                nc++;
            }
        }
        a=ac/1;
        b=bc/1;
        l=lc/2;
        n=nc/1;
        o=oc/2;
        int ans = min(b, min(a, min(l, min(o, n))));
        return ans;
    }
};