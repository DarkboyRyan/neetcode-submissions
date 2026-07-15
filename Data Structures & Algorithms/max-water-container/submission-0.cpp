class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ma = 0,h=0, left = 0, right = heights.size()-1;

        while(left < right){
            h = (min(heights[left],heights[right]) * (right - left));
            ma = max(h,ma);

            if(heights[left] < heights[right]){
                left++;
            } else {
                right--;
            }
        }    
        return ma;  
    }
};
