class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        for(int i : nums){
            l++;
            if(i == target){
                return l - 1;
            }
        }
        return -1;
    }
};
