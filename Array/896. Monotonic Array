class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        
        return increase(A)||decrease(A);
    }
    int increase(vector<int>A){
        for(int i=0;i<A.size()-1;i++){
            if(A[i]>A[i+1])return 0;
        }
        return 1;
    }
    int decrease(vector<int>A){
        for(int i=0;i<A.size()-1;i++){
            if(A[i]<A[i+1])return 0;
        }
        return 1;
    }
};
