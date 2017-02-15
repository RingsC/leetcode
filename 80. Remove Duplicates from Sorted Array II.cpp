class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() ==0 || nums.size() == 1) return nums.size();
        map<int , int> count_map;
        
        for (int i =0; i < nums.size() ; i++) {
           count_map [nums[i]] ++ ; 
        }//
        
        int count(0);
        nums.clear () ;
        map<int, int >::const_iterator cit = count_map.begin();
        for (; cit != count_map.end(); cit++) {
            if (((*cit).second) >= 2)  {
                count += 2;
                nums.push_back ((*cit).first) ;
                nums.push_back ((*cit).first) ;
            }
            else {
                count += (*cit).second;
                nums.push_back ((*cit).first) ;
            }
        }
        
        return count; 
    }
};