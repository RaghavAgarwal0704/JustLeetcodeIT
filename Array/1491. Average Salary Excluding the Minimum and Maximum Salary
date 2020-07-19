class Solution {
public:
    double average(vector<int>& salary) {
        int min=salary[0],max=salary[0];
        double s;
        for(auto a:salary){
            if(a>max)max=a;
            if(a<min)min=a;
            s+=a;
        }
        s=s-min-max;
        return s/(salary.size()-2);
    }
};
