class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> sub;
        dfs(nums,target,0,ans,sub);
        return ans;        
    }

private:
    void dfs(const vector<int>& nums,const int target,int i,
            vector<vector<int>>& ans,vector<int>& sub){
                if(target == 0){
                    ans.push_back(sub);
                    return;
                }
                if(i >= nums.size() || target < 0){
                    return;
                }

                sub.push_back(nums[i]);
                dfs(nums,target - nums[i],i,ans,sub);
                sub.pop_back();
                dfs(nums,target,i+1,ans,sub);
            }
};
