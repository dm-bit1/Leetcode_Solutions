class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<pair<int,int>> m = {};
        int a = 0, b = 0;   // keep track of indices in list1, list2
        // 1. add to vector the matching names using index in list1, index sum in the pair
        pair<int,int> myPair;
        
        for (string& i:list1){
            for (string& j:list2){
                if (i == j) {
                    myPair = make_pair(a,a+b);
                    // cout << a << ", " << a+b << endl;
                    m.push_back(myPair);
                }
                b++;
            }
            b = 0;
            a++;
        }
        // 2. find the minimum sum
        int min = INT_MAX;
        vector<int> x = {}; // indices in list1 of max sums
        // first, find the minimum sum
        for (pair<int,int>& p : m){
            if (p.second <= min){
                min = p.second;
            }
        }
        // add to vector all occurrences of the minimum sum
        for (pair<int,int>& p : m){
            if (p.second == min){
                x.push_back(p.first);
            }
        }
        // 3. add the result the names of minimum sum elements using list1
        vector<string> res = {};
        for (int& i : x){
            res.push_back(list1[i]);
        }

        return res;
    }
};
