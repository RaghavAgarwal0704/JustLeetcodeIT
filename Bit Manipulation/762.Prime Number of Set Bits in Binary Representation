class Solution {
public:
    int find(int n){
        int f=1,c=0;
        while(n){
            if(n&f)c++;
            n=n>>1;
        }
        return c;
    }
    int prime(int n){
        int c=find(n);
        int count=0;
        if(c<=1)return 0;
        for(int i=2;i<=(c/2);i++){
            if(c%i==0)count++;
        }
        if(count>0)return 0;
        return 1;
    }
    int countPrimeSetBits(int l, int r) {
        int count=0;
        for(int i=l;i<=r;i++){
            if(prime(i))count++;
        }
        return count;
    }
};
