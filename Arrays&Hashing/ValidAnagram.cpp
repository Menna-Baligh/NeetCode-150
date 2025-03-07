class Solution {
    public:
        bool isAnagram(string s, string t) {
            int freq[26] = {} ;
            for(char i : s){
                freq[i - 'a']++ ;
            }
            for(char i : t){
                freq[i - 'a']-- ;
            }
            for(int c :freq){
                if(c != 0) return false ;
            }
            return true ;
        }
    };
    