class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=1;
        for(int i=0;i<nums.size()-1;i++){
            j=i+1;
            while(nums[i]==0 && j<nums.size()){
                    if(nums[j]!=0){swap(nums[j],nums[i]);j++;}
                    else j++;
            }
        }
    }
};
