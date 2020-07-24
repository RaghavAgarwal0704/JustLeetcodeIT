class Solution {
public:
    int hammingWeight(uint32_t n) {
        int f=1;int c=0;
        while(n!=0){
            if((n&f))c++;
            n=n>>1;
        }
        return c;
    }
};
