class Solution {
public:
    
    int thirdMax(vector<int>& nums) {
        if (nums.size() ==0) return 0;
    
        set<int> sortnums ;
        for (int i=0;i< nums.size(); i++) 
            sortnums.insert (nums[i]) ;
    
        set<int>::reverse_iterator rcit = sortnums.rbegin() ;
        if (sortnums.size()>=3) {
            rcit++ ; 
            rcit++ ; 
            return *rcit ; 
        }
        else //first nums,the min
            return  *(sortnums.rbegin());
    }
};