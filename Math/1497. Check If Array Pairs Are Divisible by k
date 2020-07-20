class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int>freq(k,0);
        for(int a:arr){
            freq[(a%k+k)%k]++;
        }
        if(freq[0]%2!=0)return 0;
        for(int i=1;i<k;i++){
            if(freq[i]!=freq[k-i])return 0;
        }
        return 1;
    }
};
