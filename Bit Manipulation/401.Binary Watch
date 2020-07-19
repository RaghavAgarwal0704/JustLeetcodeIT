class Solution {
public:
    int count(int n){
        int f=1;int c=0;
        while(n!=0){
            c+=n&f;
            n=n>>1;
        }
        return c;
    }
    vector<string> readBinaryWatch(int num) {
        vector<string> vec;
        for(int h=0;h<=11;h++){
            for(int m=0;m<60;m++){
                int a=count(h);
                int b=count(m);
                if(a+b==num){
                    if(m<10)vec.push_back(to_string(h)+":0"+to_string(m));
                    else vec.push_back(to_string(h)+":"+to_string(m));
                }
            }
        }
        return vec;
    }
};
