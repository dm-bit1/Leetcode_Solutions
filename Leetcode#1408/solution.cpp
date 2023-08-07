class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        size_t found = 0, p1 = 0, p2 = 0;  // track position to avoid including itself

        vector<string> res = {};

        for (string &i : words){
            p2 = 0; // reset
            for (string &j : words) {
                found = i.find(j);
                if (found != string::npos && p1 != p2){
                    if (!checkDup(res, j))
                        res.push_back(j);
                }
                p2++;
            }
            p1++;
        }

        return res;
    }
    // Check for duplicates before adding to result
    bool checkDup(vector<string>& res, string& cur){
        for (auto& s : res) {
            if (s == cur) return true;
        }

        return false;
    }
};
