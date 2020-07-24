class Solution {
public:
    bool hasAlternatingBits(int n) {
        int l=((n&1)==1)?1:0;
        int f=0;
        while(n){
            if((1&n)!=l){f=1;break;}
            n=n>>1;
            l=(l+1)%2;
        }
        return (f==1)?false:true;
    }
};
