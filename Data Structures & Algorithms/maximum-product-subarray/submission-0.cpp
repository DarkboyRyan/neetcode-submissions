class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxN = nums[0];
        int minN = nums[0];
        int ans = nums[0];
        for(int i = 1; i < nums.size(); i++){
            int num = nums[i];

            if(nums[i] < 0){
                swap(minN,maxN);
            }
            
            minN = min(num,minN*num);
            maxN = max(num,maxN*num);

            ans = max(ans,maxN);
        }
        return ans;
    }
};
