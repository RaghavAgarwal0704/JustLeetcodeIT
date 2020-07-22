class Solution {
    public int searchInsert(int[] nums, int target) {
        int b=0,e=nums.length-1,m;
        while(b<=e)
        {
            m=(b+e)/2;
            if(nums[m]==target)
            {
                return m;
            }
            else if(nums[m]>target)
            {
                e=m-1;
            }
            else
            {
                b=m+1;
            }
        }
        for(int i=0;i<nums.length;i++)
        {
            if(target<=nums[i])return i;
        }
        return nums.length;
    }
}
