class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int g=arr[arr.size()-1];
        for(int i=arr.size()-1;i>=0;i--){
            int t=arr[i];
            arr[i]=g;
            if(t>g)g=t;
        }
        arr[arr.size()-1]=-1;
        return arr;
    }
};
