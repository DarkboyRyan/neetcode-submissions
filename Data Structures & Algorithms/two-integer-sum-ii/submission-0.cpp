class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int diff = 0;
        for (int i = 0; i <= numbers.size(); i++){
            diff = target - numbers[i];
            for(int j = i + 1; j <= numbers.size(); j++){
                if(diff == numbers[j]){
                    return { i + 1, j + 1};
                }
            }
        }
        return {};
    }
};
