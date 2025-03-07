class Solution {
    public:
       
        string encode(vector<string>& strs) {
            string full = "";
            for (int i = 0; i < strs.size(); i++) {
                full += to_string(strs[i].length()) + "#" + strs[i];
            }
            return full;
        }
    
        // 4#neet4#code4#love3#you
        vector<string> decode(string s) {
            vector<string> res;
            int i = 0;
            while (i < s.length()) {
               
                int lenStart = i;
                while (i < s.length() && s[i] != '#') i++;
                int len = stoi(s.substr(lenStart, i - lenStart));
                i++; 
                res.push_back(s.substr(i, len));
                i += len;
            }
            return res;
        }
    };