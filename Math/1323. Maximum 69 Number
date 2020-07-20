class Solution {
public:
    int maximum69Number (int num) {
        stack<int>s;int c=1;int t=num;
        while(t!=0){
            c++;
            t=t/10;
        }
        int f=0;
        while(--c){
            int a=num/pow(10,c-1);
            if(a==6 && f==0){s.push(9);f=1;}
            else s.push(a);
            num=num%int(pow(10,c-1));
        }
        string str="";
        while(!s.empty()){
            str=to_string(s.top())+str;
            s.pop();
        }
        return stoi(str);
    }
};
