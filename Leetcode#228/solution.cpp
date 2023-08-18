class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res = {};
        string temp = "";
        int n = nums.size();
        int j = 0, i = 0;
        if (n == 1) {
            res.push_back(to_string(nums[0]));
            return res;
        }
        for (i = 0; i < n; i++) {
            for (j = i; j < n; j++) {
                // runtime error previously
                if (j+1 < n && nums[j+1] == nums[j] + 1) {
                    continue;
                } else {
                    break;
                }
            }
            if (i == j) {// 1 number
                temp += to_string(nums[i]);
                res.push_back(temp);
                temp = ""; // reset
            } else {
                temp += to_string(nums[i]);
                temp += "->";
                temp += to_string(nums[j]);
                res.push_back(temp);
                temp = "";
            }
            i = j; // proceed where the order was broken
        }
        return res;
    }
};