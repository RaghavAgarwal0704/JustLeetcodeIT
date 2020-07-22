class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int l=0,r=A.size()-1;
        while(l<r){
            if(A[l]%2!=0&&A[r]%2==0){swap(A[l],A[r]);r--;l++;}
            else if(A[l]%2==0)l++;
            else r--;
        }
        return A;
    }
};
