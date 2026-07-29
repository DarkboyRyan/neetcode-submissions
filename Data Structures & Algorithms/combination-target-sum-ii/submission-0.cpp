class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> subset;

        sort(candidates.begin(), candidates.end());

        dfs(candidates, target, 0, ans, subset);

        return ans;
    }

private:
    void dfs(
        vector<int>& nums,
        int target,
        int start,
        vector<vector<int>>& ans,
        vector<int>& subset
    ){
        if(target == 0){
            ans.push_back(subset);
            return;
        }

        for(int i = start; i < nums.size(); i++){

            // 同一层去重
            if(i > start && nums[i] == nums[i-1])
                continue;

            if(nums[i] > target)
                break;

            subset.push_back(nums[i]);

            dfs(
                nums,
                target - nums[i],
                i + 1,
                ans,
                subset
            );

            subset.pop_back();
        }
    }
};