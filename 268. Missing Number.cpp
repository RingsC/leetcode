class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i =0;
        while (i < nums.size()) {
            if (nums[i] == nums.size()) {
                std::swap (nums[i], nums[nums.size() -1]) ;
                i ++ ;
            }
            else if (nums[i] != i) 
                    std::swap (nums[i], nums[nums[i]]) ;
            else
                i ++ ; 
        }
    
        i =0 ;
        while (i < nums.size()) {
            if (nums[i] != i) return i ; 
            else
                i ++ ;
        }
    
        return nums.size() ;
    }
};