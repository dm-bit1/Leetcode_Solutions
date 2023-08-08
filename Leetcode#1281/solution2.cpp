class Solution {
public:
    int subtractProductAndSum(int n) {
        int pr = 1, sum = 0;
        while (n > 0) {
            int x = n % 10;
            n /= 10;
            pr *= x;
            sum += x;
        }
        return pr - sum;
    }
};