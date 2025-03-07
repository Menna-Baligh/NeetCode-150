class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            map<int , int>freq ;
            for(int i = 0 ; i < nums.size() ; i++){
                freq[nums[i]]++ ;
            }
            multimap<int, int>res ; 
            for(auto it = freq.begin() ; it != freq.end() ; it++){
                res.insert({it->second , it->first}) ;
            }
            
            vector<int>answer;
            auto it = res.rbegin() ;
            while(k--){
                answer.push_back(it->second) ;
                it++ ;
            }
            return answer ;
    
        }
    };
    