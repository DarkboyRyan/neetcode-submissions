class Solution {
public:
    int trap(vector<int>& height) {
        int ma = 0, l = 0, r = height.size()-1;
        int maxl = height[l], maxr = height[r];
        while( l < r){
            if(maxl < maxr){
                l++;
                maxl = max(maxl,height[l]);
                ma += (maxl - height[l]);
            } else {
                r--;
                maxr = max(maxr,height[r]);
                ma += (maxr - height[r]);
            }
        }

        return ma;
    }
};
