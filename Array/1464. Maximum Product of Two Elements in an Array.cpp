class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max=nums[0],pos=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){max=nums[i];pos=i;}
        }
        int sec=-9999;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>sec && nums[i]<=max && i!=pos)sec=nums[i];
        }
        return (max-1)*(sec-1);
    }
};
