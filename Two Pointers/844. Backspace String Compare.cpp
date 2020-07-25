class Solution {
public:
    bool backspaceCompare(string s1,string s2) {
        stack<char>a;
        stack<char>b;
        for(int i=0;i<s1.length();i++){
            char t=s1[i];
            if(t!='#')a.push(t);
            else{
                if(a.empty())continue;
                else a.pop();
            }
        }
        for(int i=0;i<s2.length();i++){
            char t=s2[i];
            if(t!='#')b.push(t);
            else{
                if(b.empty())continue;
                else b.pop();
            }
        }
        int f=0;
        while(1){
            if((a.empty() && !b.empty())||(!a.empty() && b.empty())){f=1;break;}
            if(a.empty()&&b.empty())break;
            if(a.top()!=b.top()){f=1;break;}
            else {a.pop();b.pop();}
        }
        if(f==1)return false;
        return true;
    }
};
