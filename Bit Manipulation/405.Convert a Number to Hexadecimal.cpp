class Solution {
public:
    string toHex(long int num) {
        if(num==0)return "0";
        if(num<0){num=num+pow(2,32);}
        string s="";
        char a[]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
        while(num!=0){
            s=a[num%16]+s;
            num/=16;
        }
        return s;
    }
};
