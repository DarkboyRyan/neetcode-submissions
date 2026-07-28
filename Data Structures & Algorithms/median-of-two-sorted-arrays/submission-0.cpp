class Solution {
public:
    vector<double> t;
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i : nums1){
            t.emplace_back(i);
        }       
        for(int i: nums2){
            t.emplace_back(i);
        }
        sort(t.begin(),t.end());

        if(t.size() % 2 != 0){
            int mid = (t.size()-1) / 2;
            return t[mid];            
        } else {
            int right = t.size()/2 - 1;
            int left = t.size()/2;
            return (t[right] + t[left])/2;
        }
    }
};
