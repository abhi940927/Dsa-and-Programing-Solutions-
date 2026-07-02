class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int res = 0;
        int prevCnt = 0;
        for(int i =0;i<n; i++) {
            int currCnt = 0;
            for (auto &ch : bank[i]) {
                if(ch == '1') {
                    currCnt++;
                }
            }
            res += prevCnt * currCnt;
            if(currCnt != 0) {
                prevCnt = currCnt;
            }
        }
        return res;
    }
};