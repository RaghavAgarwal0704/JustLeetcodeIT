class Solution {
public:
    int getSum(int a, int b) {
        while(b!=0){
            int t=a;
            a=a^b;
            b=(b & t & INT_MAX)<<1;//INT_MAX is done because leetcode does not allow left shift if first bit is 1 in which case it overflows.
        }
        return a;
    }
};
