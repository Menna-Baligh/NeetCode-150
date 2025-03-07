class Solution {
    public:
        bool hasDuplicate(vector<int>& nums) {
            set<int>s ;
            for(auto i : nums){
                s.insert(i);
            }
            if(nums.size() == s.size()) return false ;
            return true ;
        }
    };