class Solution {
public:
    int calc(int x){
        int c=0;
        int f=1;
        while(x!=0){
            c+=x&f;
            x=x>>1;
        }
        return c;
    }
    vector<int> sortByBits(vector<int>& nums) {
        vector<int> vec;
        for(int i=0;i<nums.size();i++){
            vec.push_back(calc(nums[i]));
        }
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(vec[i]>vec[j]){
                    int t=nums[i];
                    nums[i]=nums[j];
                    nums[j]=t;
                    t=vec[i];
                    vec[i]=vec[j];
                    vec[j]=t;
                }
                if(vec[i]==vec[j]){
                    if(nums[i]>nums[j]){
                        int t=nums[i];
                        nums[i]=nums[j];
                        nums[j]=t;
                        t=vec[i];
                        vec[i]=vec[j];
                        vec[j]=t;
                    }
                }
            }
        }
        return nums;
    }
};
