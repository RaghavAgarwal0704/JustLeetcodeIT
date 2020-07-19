class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l=0,r=nums.size()-1,p=nums.size()-1;
        while(l<=r){
            nums[p--]=(int)pow(nums[(abs(nums[l])>abs(nums[r]))?l++:r--],2);
        }
        return nums;
    }
};
