class Solution {
public:
    int countSubstrings(string s) {
        int res = 0;

        for(int i = 0; i < s.length();i++){
            res += helper(s,i,i);
            res += helper(s,i,i+1);
        }

        return res;              
    }

private:
    int helper(string s,int l, int r){
        int res = 0;

        while(l >= 0 && r < s.length() && s[l] == s[r]){
            res++;
            l--;
            r++;
        }

        return res;
    }
};
