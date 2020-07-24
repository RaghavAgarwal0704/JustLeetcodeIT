#include<stdlib.h>
class Solution {
public:
    int findComplement(int num) {
        int t=num,c=0;
        while(num!=0){
            c++;
            num=num/2;
        }
        return pow(2,c)-1-t;
    }
};
