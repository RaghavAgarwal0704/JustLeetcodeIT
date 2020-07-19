class Solution {
public:
    int singleNumber(vector<int>& nums) {
        set<int> s;
        unsigned long int sum=0,num=0;
        set<int>::iterator itr;
        for(int i=0;i<nums.size();i++){
            num+=nums[i];
            s.insert(nums[i]);
        }
        for(itr=s.begin();itr!=s.end();itr++){
            sum+=*itr;
        }
        return (3*sum-num)/2;
    }
};
