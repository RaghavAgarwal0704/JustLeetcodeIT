class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        for(int i=0;i<A.size();i++){
            int ptr=i+1;
            while(!((i%2==0 && A[i]%2==0)||(i%2!=0&&A[i]%2!=0))){
                swap(A[i],A[ptr]);
                ptr++;
            }
        }
        return A;
    }
};
