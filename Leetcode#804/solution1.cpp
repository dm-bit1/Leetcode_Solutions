class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> codes = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_map<string, int> coded_words;

        for (int i = 0; i < words.size();i++) {
            string ans = "";

            for (int j = 0; j < words[i].size();j++) {
                int pos = words[i][j] - 'a';

                ans += codes[pos];
            }
            coded_words[ans];

        }
        return coded_words.size();
    }
};