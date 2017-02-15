#include <map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> result;
        std::multimap <int, int> value;
        std::vector<int>::const_iterator cit = nums.begin();

        int index =0;
        for (; cit != nums.end() ; index++, cit++) {
            value.insert (std::make_pair(*cit,index)) ;
        
            std::multimap<int,int>::const_iterator other_cit = value.find(target-*cit) ;
            if (*cit != target- *cit) {
                if (other_cit != value.end()) {
                    result.push_back(other_cit->second) ;
                    result.push_back(index);
                }
            }else{ //for a+a = target
                if (value.count(*cit) ==2) {
                    result.push_back ((other_cit++)->second) ;
                    result.push_back (other_cit->second) ;
                }
            }
        }
        return result;
    }
};