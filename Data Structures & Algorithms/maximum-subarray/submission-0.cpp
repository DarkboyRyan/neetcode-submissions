class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(),max = -999;
        for(int i = n - 1; i >= 0; i--){
            int total = 0;
            for(int j = i; j < n; j++){
                total += nums[j];
                if(total > max){
                    max = total;
                } 
            }
        } 
        return max;
    }
};
