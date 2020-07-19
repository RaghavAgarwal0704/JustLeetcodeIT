class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector <int> vec;
        map<int,int>m;
        for(int i=0;i<nums.size();i++){    
            int comp=target-nums[i];
            if(m.find(comp)!=m.end() && m.find(comp)->second!=i)return {i,m.find(comp)->second};
            m.insert(pair<int,int>(nums[i],i));
        }
        return{-1,-1};
    }
};
