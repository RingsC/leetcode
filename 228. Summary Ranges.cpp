class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
            vector<string> result ; 
        
            if (nums.size() ==1) { 
                stringstream ss ;
                ss<< nums[0] ;
                result.push_back (ss.str()) ;
                return result; 
            }
            int start(INT_MAX), end(INT_MIN) ;
            
            for (int i = 0; i < nums.size(); i++) {
                if (start > nums[i])
                    start = nums [i] ;
                if (end < nums [i])
                    end = nums [i] ;
                if (i == nums.size()-1 || nums[i] + 1 < nums[i+1]){
                    stringstream ss ;
                    if (start == end) {
                        ss << start ; 
                    } else {
                        ss << start ; ss << "->" ; ss<< end; 
                    }
                    result.push_back (ss.str());
                    ss.clear() ;
                    start = INT_MAX; 
                    end = INT_MIN; 
                }
            }
            return result; 
    }
};