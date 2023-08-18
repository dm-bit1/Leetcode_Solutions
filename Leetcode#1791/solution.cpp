class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        int a = 0, t = 0, f = 0;
        int node = 0;
        for (int i = 0; i < n-1; i++){
            f = edges[i][0];
            t = edges[i][1];
            a=1;
            for (int j = i+1; j < n; j++) {
                if (edges[j][0] == f || edges[j][1] == f) {
                    a++;
                    node = f;
                }
                if (edges[j][0] == t || edges[j][1] == t) {
                    a++;
                    node = t;
                }
                if (a == n){
                    return node;
                }
            }
            a=0; //reset
            node=0;
        }
        return -1;
    }
};