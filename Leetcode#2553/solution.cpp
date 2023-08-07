class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res = {};
        
        vector<int> rev = {};

        int n = 0, rem = 0;

        for (auto &i : nums) {
            rev = {};   // reset
            int size = Size(i);
            for (int j = 0; j < size;j++) {
                rem = i % 10;
                i = i/10;
                rev.push_back(rem);
            }
            for (int k = rev.size()-1; k >= 0; k--) {
                res.push_back(rev[k]);
            }
        }

        return res;
    }
    // Returns the number of digits
    int Size(int num){
        return int(log10(num) + 1);
    }
};