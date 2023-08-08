class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int& i : nums) {
            freq[i]++;
        }
        pair<int, int> max;
        for (auto& i : freq) {
            if (i.second > max.second) {
                max = i;
            }
            cout << i.first << ": " << i.second << endl;
        }
        return max.first;
    }
};