class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> sum;
        vector<vector<int>> res;
        dfs(nums,0,sum,res);
        return res;        
    }
private:
    void dfs(const vector<int>& nums,int i, 
                            vector<int>& sum,vector<vector<int>>& res){
                                if(i >= nums.size()){
                                    res.push_back(sum);
                                    return;
                                }
                                
                                sum.push_back(nums[i]);
                                dfs(nums,i+1,sum,res);
                                sum.pop_back();
                                dfs(nums,i+1,sum,res);
                            }
};
