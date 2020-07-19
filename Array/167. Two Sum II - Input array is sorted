class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=numbers.size()-1;
        int s=0;
        vector<int>vec;
        while(l<r){
            s=numbers[l]+numbers[r];
            if(s>target)r--;
            else if(s<target)l++;
            else {
                vec.push_back(l+1);vec.push_back(r+1);
                return vec;
            }
        }
        return vec;
    }
};
