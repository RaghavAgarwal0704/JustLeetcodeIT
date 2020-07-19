class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int c=0;
        for(int i=0;i<startTime.size();i++){
            int s=startTime[i];
            int e=endTime[i];
            if(queryTime>=s && queryTime<=e)c++;
        }
        return c;
    }
};
