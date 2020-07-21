class Solution {
public:
    int calc(int n){
        int f=1;int c=0;
        while(n!=0){
            c+=n&f;
            n=n>>1;
        }
        return c;
    }
    vector<int> countBits(int num) {
        vector<int> vec;
        for(int i=0;i<=num;i++){
            vec.push_back(calc(i));
        } 
        return vec;
    }
};
