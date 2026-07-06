class Solution {
public:
    vector<vector<int>> dp;
    int rob(vector<int>& nums) {
        dp.resize(nums.size(),vector<int>(2,-1));
        return max(total(nums,0,0),total(nums,1,0));
    }

    int total(vector<int>& nums,int flag, int t) {
        if(t >= nums.size()|| (flag == 1 && t == nums.size() - 1)) return 0;
        if(dp[t][flag] != -1) return dp[t][flag];
        
        dp[t][flag] = max(nums[t]+total(nums,flag | (t == 0? 1 : 0) ,t+2),total(nums,flag ,t+1));
        return dp[t][flag];
    }
};
