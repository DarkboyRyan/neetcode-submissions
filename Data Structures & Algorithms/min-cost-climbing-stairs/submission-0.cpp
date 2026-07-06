class Solution {
public:
    vector<int> memo;
    int minCostClimbingStairs(vector<int>& cost) {
        memo.resize(cost.size(),-1);
        return min(dfs(cost,0),dfs(cost,1));
    }
    int dfs(vector<int>& cost,int n){
        if(n >= cost.size()) return 0;
        if(memo[n] != -1) return memo[n];

        memo[n] = cost[n] + min(dfs(cost,n+1),dfs(cost,n+2));

        return memo[n];
    }
};
