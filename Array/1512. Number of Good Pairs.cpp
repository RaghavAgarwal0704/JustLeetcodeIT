class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int c=0;
        map<int,int>m;
        for(auto x:nums){
            m[x]++;
        }
        for(auto i:m){
            if(i.second>1)c+=i.second*(i.second-1)/2;
        }
        return c;
    }
};
