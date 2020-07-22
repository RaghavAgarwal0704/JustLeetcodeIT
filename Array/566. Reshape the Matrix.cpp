class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int n=nums[0].size()*nums.size();
        if(n%(r*c)!=0)return nums;
        vector<int>v;
        vector<vector<int>>finvec;
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[0].size();j++){
                v.push_back(nums[i][j]);
            }
        }
        for(int i=0;i<r;i++){
            vector<int>vec;
            for(int j=0;j<c;j++){
                vec.push_back(v[count]);count++;
            }
            finvec.push_back(vec);
        }
        return finvec;
    }
};
