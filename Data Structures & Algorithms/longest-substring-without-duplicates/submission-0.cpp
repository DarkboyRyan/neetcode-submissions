class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charS;
        int l = 0;
        int count = 0;

        for(int r = 0; r < s.size(); r++){
            while(charS.find(s[r]) != charS.end()){
                charS.erase(s[l]);
                l++;
            }
            charS.insert(s[r]);
            count = max(count, r - l + 1);
        }
        return count;
    }
};
