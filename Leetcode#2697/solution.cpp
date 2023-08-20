class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n = s.size();
        int m = n/2; // midpoint
        int i=0, j=n-1;
        string res(n, '\0'); // result
        int y = 0;
        if (n%2 == 1) {
            res[m] = s[m];
        }

        while (i < m && j > m-1) {
            if (s[i] != s[j]) {
                if (s[j] >= s[i]) {
                    res[i] = s[i];
                    res[j] = s[i];
                } else {
                    res[i] = s[j];
                    res[j] = s[j];
                }
            } else{
                res[i] = s[i];
                res[j] = s[i];
            }
            i++;
            j--;
        }
        return res;
    }
};
