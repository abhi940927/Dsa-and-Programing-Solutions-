class Solution {
public:
    int minSteps(string s, string t) {
        int n = s.length();
        vector<int> freqS(26,0);
        vector<int> freqT(26, 0);
        for(int i=0; i<n; i++){
            freqS[s[i]-'a']++;
            freqT[t[i]-'a']++;
        }
        int diff = 0;
        for(int i = 0; i <26; i++) {
            if (freqS[i] > freqT[i]){
                diff += freqS[i] - freqT[i];
            }
        }
        return diff;
    }
};