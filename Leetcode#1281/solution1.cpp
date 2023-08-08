class Solution {
public:
    int subtractProductAndSum(int n) {
        int pr = 1, sum = 0;
        string num = to_string(n);
        for (int i = 0; i < num.size(); i++) {
            int x = int(num[i]) - 48;
            cout << x << endl;
            pr *= x;
            sum += x;
        }
        cout << pr << ", " << sum << "," << num << endl;
        return pr - sum;
    }
};