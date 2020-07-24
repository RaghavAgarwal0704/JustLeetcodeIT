class Solution {
public:
    char findTheDifference(string s, string t) {
        int b=0;
        for(auto a:s){
            b=b^a;
        }
        for(auto a:t){
            b=b^a;
        }
        return (char)b;
    }
};
