class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> count; 
        for (int i=0; i < nums.size(); i++) {
            count [nums[i]] ++ ;
        }
        
        map<int,int>::const_iterator cit  = count.begin() ;
        
        for (; cit != count.end(); cit++) {
            if ( (*cit).second == 3 )
                continue;
            else
                return (*cit).first;
        }
        
        return 0;
    }
};