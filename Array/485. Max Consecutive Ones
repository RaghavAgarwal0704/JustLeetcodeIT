class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;
        int max=c;
        for(int a:nums){
            if(a==1){c++;}
            else {
                if(c>max)max=c;
                c=0;
            }
        }
        return max>c?max:c;
    }
};
