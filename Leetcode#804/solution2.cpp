class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        map<char, string> m;
        unordered_set<string> s;
        
        m['a'] = ".-";
        m['b'] = "-...";
        m['c'] = "-.-.";
        m['d'] = "-..";
        m['e'] = ".";
        m['f'] = "..-.";
        m['g'] = "--.";
        m['h'] = "....";
        m['i'] = "..";
        m['j'] = ".---";
        m['k'] = "-.-";
        m['l'] = ".-..";
        m['m'] = "--";
        m['n'] = "-.";
        m['o'] = "---";
        m['p'] = ".--.";
        m['q'] = "--.-";
        m['r'] = ".-.";
        m['s'] = "...";
        m['t'] = "-";
        m['u'] = "..-";
        m['v'] = "...-";
        m['w'] = ".--";
        m['x'] = "-..-";
        m['y'] = "-.--";
        m['z'] = "--..";
        
        string temp;
        
        for(string x : words)
        {
            temp = "";
            for (char y : x)
                temp += m[y];
            s.insert(temp);
        }
        
        return s.size();
    }
};