class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> hashM;

        for(char s : s1){
            hashM[s]++;
        }
        int l = hashM.size();
        for(int i = 0; i <= s2.size(); i++){
            unordered_map<char,int> hashM2;
            int cur = 0;
            for(int j = i; j <= s2.size();j++){
                char c = s2[j];
                hashM2[c]++;

                if(hashM[c] < hashM2[c]){
                    break;
                }
                if(hashM[c] == hashM2[c]){
                    cur++;
                }
                if(cur == l){
                    return true;
                }
            }           
        }
        return false;     
    }
};
