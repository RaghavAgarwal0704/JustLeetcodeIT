class Solution {
    public int maxSubArray(int[] nums) {
        int cur=nums[0],global=nums[0];
        for(int i=1;i<nums.length;i++)
        {
            if(cur+nums[i]>nums[i])cur=cur+nums[i];
            else cur=nums[i];
            if(cur>global)global=cur;
        }
        return global;
    }
}
