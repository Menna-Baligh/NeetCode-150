class Solution {
    public:
        bool isPalindrome(string s) {
        transform(s.begin() , s.end() ,s.begin() , ::tolower);
        int i = 0 ;
        int j = s.size()-1 ;
        int flag = 1 ;
        while(i < j){
            if((s[i] >= 'a' && s[i] <= 'z') ||( s[i] >= '0' && s[i] <= '9')){
                if((s[j] >= 'a' && s[j] <= 'z') ||( s[j] >= '0' && s[j] <= '9')){
                    if(s[i] != s[j]) flag = 0 ;
                    else { i++ ; j-- ;}
                    
                }else{
                    j-- ;
                }
            }else{
                i++ ;
            }
    
            if(!flag) return false ;
        }
        return true ;
       }
    };
    