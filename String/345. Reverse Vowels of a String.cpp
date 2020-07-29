class Solution {
public:
    int vowel(char s){
        return(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U'); 
    }
    string reverseVowels(string s) {
        int l=0,r=s.length()-1;
        while(l<r){
            if(!vowel(s[l])){l++;continue;}
            while(!vowel(s[r]) && l<r){
                r--;
            }
            swap(s[l++],s[r--]);
        }
        return s;
    }
};
