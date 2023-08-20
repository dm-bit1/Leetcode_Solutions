class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count = 0, i = 0, j = 0,k = 0, n = nums.size();
        for (i=0; i<n-2; i++) {
            for (j=i+1; j<n-1; j++) {
                if (fabs(nums[i] - nums[j]) == diff) {
                    for (k=j; j<n ; j++) {
                        if (fabs(nums[j] - nums[k]) == diff) {
                            count++;
                        }
                    }
                }
            }
        }

        return count;
    }
};
