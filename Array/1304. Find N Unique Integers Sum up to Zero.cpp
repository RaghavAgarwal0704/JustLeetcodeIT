class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>vec;
        if(n==1){vec.push_back(0);return vec;}
        int t=n/2;
        if(n%2!=0)vec.push_back(0);
        for(int i=-t;i<=t;i++){
            if(i!=0)vec.push_back(i);
        }
        return vec;
    }
};
