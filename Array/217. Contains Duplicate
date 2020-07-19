class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()<2)return false;
        set<int>s;int noz=0;
        set<int>::iterator itr;
        long int num=0,sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)noz++;
            num+=nums[i];
            s.insert(nums[i]);
        }
        for(itr=s.begin();itr!=s.end();itr++){
            sum+=*itr;
        }
        if(sum!=num || noz>=2)return true;
        else return false;
    }
};
