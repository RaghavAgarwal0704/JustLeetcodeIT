class Solution {
public:
    int hammingDistance(int x, int y) {
        // int f=1,c=0;
        // while(x!=0 || y!=0){
        //     if((x&f)!=(y&f))c++;
        //     x=x>>1;
        //     y=y>>1;
        // }
        // return c;
        int f=1,count=0;
        int z=x^y;
        while(z!=0){
            count+=f&z;
            z=z>>1;
        }
        return count;
    }
};


