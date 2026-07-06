class Solution {
public:
    vector<int> dp;
    int rob(vector<int>& nums) {
        dp.resize(nums.size(),-1);
        return total(nums,0);
    }

    int total(vector<int>& nums, int t) {
        if(t >= nums.size()) return 0;
        if(dp[t] != -1) return dp[t];
        
        dp[t] = max(nums[t]+total(nums,t+2),total(nums,t+1));
        return dp[t];
    }
};
