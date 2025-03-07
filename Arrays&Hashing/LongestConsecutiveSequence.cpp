class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            if(nums.empty()) return 0 ;
            set<int> s (nums.begin() , nums.end());
            auto l = s.begin();
            auto r = s.begin(); r++ ;
            int maxLen = 0 ;
            int c  = 1; 
            while(r != s.end()){
                if(*r - *l == 1) {
                    c++ ; 
                }else{
                    maxLen = max(maxLen , c);
                    c = 1 ;
                }
                l++ , r++ ;
            }
            maxLen = max(maxLen , c);
            return maxLen ;
    
        }
    };
    