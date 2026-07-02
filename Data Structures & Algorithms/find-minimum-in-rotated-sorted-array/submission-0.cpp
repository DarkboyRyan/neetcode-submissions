class Solution {
public:
    int findMin(vector<int> &nums) {
        int result = nums[0];

        for (int i : nums){
            if(result > i){
                result = i;
            }
        }

        return result;
    }
};
