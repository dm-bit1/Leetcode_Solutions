class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        map<int, int> freq;
        for (int i= 1950; i <= 2050-1;i++){
            freq[i];
        }
        int dif = 0;
        for (const vector<int>& i : logs){
            dif = i[1] - 1 - i[0];
            while (dif >= 0){
                freq[i[0] + dif]++;
                dif--;
            }
        }
        int max = -1;
        int ans = 0;
        for (const auto& i : freq){
            if (i.second > max) {
                ans = i.first;
                max = i.second;
            }
        }
        return ans;
    }
};