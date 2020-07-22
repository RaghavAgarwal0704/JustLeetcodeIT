class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int s=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i+=2){
            if(nums[i]<nums[i+1])s+=nums[i];
            else s+=nums[i+1];
        }
        return s;
    }
};
