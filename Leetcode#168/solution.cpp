class Solution {
public:
    string convertToTitle(int n) {
        string ans = "";
        vector<char> alphabet = {'A', 'B','C','D', 'E', 'F','G', 'H', 'I', 'J', 'K','L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        while (n) {
            ans += alphabet[(n - 1) % 26];
            n = (n - 1) / 26;
        }
        string rev = "";
        for (int i = ans.size() - 1; i >= 0; i--) {
            rev += ans[i];
        }
        return rev;
    }
};