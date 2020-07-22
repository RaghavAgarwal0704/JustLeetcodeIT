class Solution {
public:
    bool calc(int n){
        int count=0;
        while(n){
            count++;
            n/=10;
        }
        return (count%2==0);
    }
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(auto a:nums){
            if(calc(a))count++;
        }
        return count;
    }
};
