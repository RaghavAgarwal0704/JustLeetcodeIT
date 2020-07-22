class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l=0,r=nums.size()-1;
        if(nums.size()==1 && val==nums[0])return 0;
        while(l<=r){
            if(nums[l]==val){
                swap(nums[l],nums[r]);
                r--;
            }
            else l++;
        }
        return r+1;
    }
};
