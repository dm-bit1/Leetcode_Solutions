class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 1) {
            return 1;
        }
        if (n == 0 || n == -1) {
            return 0;
        }
        if (n <= -2) {
            int r = -1, n = 0;
            while (r > n) {
                r *= 2;
                n++;
            }
            if (n%2 == 0){
                return 0;
            } else {
                return 1;
            }
        }
        if (n >= 2) {
            unsigned r = 1;
            while (r < n) {
                r *= 2;
            }
            return r==n;
        }
        return 0;
    }
};