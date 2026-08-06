class Solution {
public:
    int numDecodings(string s) {
        vector<int> memo(s.size(),-1);
        return helper(s,0,memo);       
    }

private:
    int helper(string s,int pos,vector<int>& memo){
        if(pos == s.size()){
            return 1;
        }

        if(s[pos] == '0'){
            return 0;
        }

        if(memo[pos] != -1){
            return memo[pos];
        }

        int ans = helper(s,pos+1,memo);

        if(pos + 1 < s.size()){
            int num = stoi(s.substr(pos,2));
            if(num <= 26){
                ans += helper(s,pos+2,memo);
            }
        }

        memo[pos] = ans;
        return ans;
    }
};
